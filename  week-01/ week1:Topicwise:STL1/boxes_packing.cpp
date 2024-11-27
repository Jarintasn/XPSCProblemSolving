#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
int n;cin>>n;
map<long long int,int>mp;
 
for(int i=0;i<n;i++)
{   long long int a;
    cin>>a;
    mp[a]++;
}
int mx=INT_MIN;
for(auto it:mp)
{
  mx=max(mx,it.second);
}
cout<<mx<<endl;
return 0;
}