#include<bits/stdc++.h>
#include<bits/stdc++.h>
using namespace std;
# define int long long
#define opti ios_base::sync_with_stdio(false);
# define mise cin.tie(NULL);
  struct MinHeapNode{
      char data;
      int freq;
      MinHeapNode *left,*right;
      MinHeapNode(char data,int freq){
      left=right=NULL;
      this->data=data;
      this->freq=freq;
     }
};
struct compare{
        bool operator()(MinHeapNode *l,MinHeapNode *r)
    {
        return (l->freq>r->freq);
    }
};
void printCodes(struct MinHeapNode* root,string str){
   if(!root){
       return;
   }
   if(root->data!='$'){
       cout<<root->data<<": "<<str<<endl;
   }
   printCodes(root->left,str+"0");
   printCodes(root->right,str+"1");
}
   void HuffmanCodes(char data[],int freq[],int size){
   struct MinHeapNode *left,*right,*top;
   priority_queue<MinHeapNode*,vector<MinHeapNode*>,compare> minheap;
   for(int i=0;i<size;i++){
    minheap.push(new MinHeapNode(data[i],freq[i]));
 }
    while(minheap.size()!=1){
    left = minheap.top();
     minheap.pop();
    right = minheap.top();
    minheap.pop();

     tmp = new MinHeapNode('$',left->freq+right->freq);
     tmp->left = left;
     tmp->right = right;
     minheap.push(tmp);
 }
 printCodes(minheap.top()," ");
}
signed main(){
  char arr[] = {'a','b','c','d','e'};
  int freq[] = {10,5,2,14,15};
  int size=5;
  HuffmanCodes(arr,freq,size);
  return 0;
}
