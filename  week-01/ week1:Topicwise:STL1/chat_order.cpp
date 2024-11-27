#include<iostream>
#include<map>
using namespace std;
int main()
{
int t;
cin>>t;
string st[t];
map<string,int> mp;
 
 for(int i=0;i<t;i++)
 {
    cin>>st[i];
 }
for(int i=t-1;i>=0;i--)
{
if(mp[st[i]]==0)
{
    cout<<st[i]<<endl;
    
}

mp[st[i]]++;

}

return 0;
}