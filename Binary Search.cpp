#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
 int i, low, high, mid, n, key, array[100];

 cout<<"Enter number of elements:"<<endl;

 cin>>n;

 cout<<"Enter "<< n <<" integers:"<<endl;

 for(i = 0; i<n; i++)
 cin>>array[i];
 cout<<endl<<"Enter value to find:"<<endl;
 cin>>key;
 low = 0;
 high = n - 1;
 mid = (low+high)/2;
 while (low <= high)
 {
 if(array[mid] < key)
 low = mid + 1;

 else if (array[mid] == key)
 {
 cout<< key <<" found at location "<< mid+1<<"th"<<endl;
 break;
 }
 else
 high = mid - 1;
 mid = (low + high)/2;

 }

 if(low > high)

 cout<<"Not found!"<< key <<" isn't present in the list";
 return 0;

 }
