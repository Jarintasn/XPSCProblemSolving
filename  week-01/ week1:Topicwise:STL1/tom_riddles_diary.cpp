#include<iostream>
#include<map>
using namespace std;
int main()
{
map<string,int>mp;
int t;cin>>t;
for(int i=0;i<t;i++)
{  
    string s;cin>>s;
    if(mp[s]==0) cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
    }
    mp[s]++;
}

return 0;
}