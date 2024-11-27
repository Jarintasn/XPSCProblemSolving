#include<iostream>
using namespace std;
int main()
{
int t;cin>>t;
 while(t--)
{
    string s;cin>>s;
    bool flag=false;
    for(int i=0;i<s.length();i++)
    {
        cout<<s[i];
        if(s[i]==s[i+1]&&flag==false)
        {
            flag=true;
            if(s[i]=='a') cout<<'b';
            else cout<<'a';

        }
    }
    if(flag==false)
    {
       if(s[s.length()-1]=='a') cout<<'b';
       else cout<<'a';
    }
    cout<<endl;
}

return 0;
}