#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int t=2;
    int sum=0;
    while(t--)
    {
       if(a>b)
       {
        sum+=a;
        a--;
       }
       else
       {
        sum+=b;
        b--;
       } 
    }
cout<<sum<<endl;

return 0;
}