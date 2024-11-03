#include<iostream>
#include<string>

using namespace std;
int main()
{

string s,t;

cin>>s>>t;
int count=0;
for(int i=0;i<s.length();i++)
{
    if(s[i]!=t[i])
    {
        t[i]=s[i];
        count++;
    }
}
cout<<count<<endl;

return 0;
}