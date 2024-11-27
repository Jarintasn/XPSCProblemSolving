#include<iostream>
#include<string>
#include<map>

using namespace std;
int main()
{
int n; cin>>n;
map <pair<string,string>,bool> mp;
for(int i=0;i<n;i++)
{
string tree; cin>>tree;
string leave; cin>>leave;
mp[make_pair(tree,leave)]=true;
}
cout<<mp.size()<<endl;

return 0;
}