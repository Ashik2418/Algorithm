#include<bits/stdc++.h>
using namespace std;
# define int long long
#define opti ios_base::sync_with_stdio(false);
# define mise cin.tie(NULL);
 int ack(int m, int n)
 {
 if( m == 0 )
 {
     return n+1;
 }
 else if(n==0 && m > 0)
 {
     return ack(m-1,1);
 }
 else if(n>0 && m>0 )
 {
     return ack(m-1,ack(m,n-1));
 }
 }
 signed main()
 {
     int A;
     A=ack(1 , 7);
     cout<<A;
 }


