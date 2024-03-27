#include<bits/stdc++.h>
using namespace std;
# define int long long
#define opti ios_base::sync_with_stdio(false);
# define mise cin.tie(NULL);
signed main(){
opti mise
     int A[10]={1,2,3,4,5,6,7,8,9,10};
     int found = 0;
     int n;
     cin>>n;
     for(int i=0;i>=n;i++)
     {
         if(A[i]==n)
         {
             cout<<i<<endl;
             found++;
             break;
         }
         if(found==0)
         {
             cout<<"Data Not entry"<<endl;
         }
     }
}
