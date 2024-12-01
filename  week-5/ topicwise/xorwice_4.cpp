#include<iostream>
using namespace std;
int main()
{
int t;cin>>t;
while(t--)
{
    long long int a,b,x; cin>>a>>b;
    x=a;
    cout<<(a^x)+(b^x)<<endl;
}

return 0;
}