#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{

int t; cin>>t;
map<string,string>mp;

while(t--)
{
string s1,s2; cin>>s1>>s2;
bool ok=false;
for(auto it:mp)
{
if(it.second==s1) 
  {
    mp[it.first]=s2;
    ok=true;
}
}
if(!ok) mp[s1]=s2;
}
cout<<mp.size()<<endl;
for(auto it:mp)
{
    cout<<it.first<<" "<<it.second<<endl;
}

return 0;
}