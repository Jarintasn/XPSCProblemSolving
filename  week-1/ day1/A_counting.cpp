#include<iostream>
using namespace std;
int main()
{
int a,b;
int count=0;
cin>>a>>b;

for(int i=a;i<=b;i++)
{
    if(a<=i&&b>=i)
    {
        count++;
    }
}
cout<<count<<endl;

return 0;
}