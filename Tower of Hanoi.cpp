#include<bits/stdc++.h>
#include<cmath>
using namespace std;
# define int long long
#define opti ios_base::sync_with_stdio(false);
# define mise cin.tie(NULL);
void Ashik(int n,char Beginner,char to,char End)
{
    if(n==1)
        cout<<"move form "<<Beginner<<" To "<<to<<endl;
    else
    {
        Ashik(n-1,Beginner,End,to);
        Ashik(1,Beginner,to,End);
        Ashik(n-1,End,to,Beginner);
    }
}
signed main()
{
    opti mise
    int n;
    cout<<"Number Of Tower"<<endl;
    cin>>n;
    Ashik(n,'A','C','B');
    int base,exponent,result;
    base=2;
    exponent=n;
    result= pow(base,exponent)-1;
    cout<<" Total Steps: "<<result<<endl;
}
