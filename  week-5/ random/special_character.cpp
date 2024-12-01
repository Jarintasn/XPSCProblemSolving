#include<iostream>
using namespace std;
int main()
{
int t;cin>>t;
while(t--)
{
int n;cin>>n;
if(n%2!=0) cout<<"NO"<<endl;
else
{
   cout<<"YES"<<endl;
   int check=0;
   while(n)
   {
    if(check==0) 
    {
        cout<<"AA";
        check=1;
    }
    else{
        cout<<"BB";
        check=0;
    }
    n-=2;
   }
}
cout<<endl;
}
return 0;
}