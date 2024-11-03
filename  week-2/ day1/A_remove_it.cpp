#include<iostream>
#include<vector>
#define ll long long int 
using namespace std;
int main()
{
int n;
ll x;
cin>>n>>x;
vector<ll> arr(n);


for(int i=0;i<n;i++)
{
    cin>>arr[i];
}

vector<ll> r;

for(int i=0;i<n;i++)
{
    if(arr[i]!=x)
    {
        r.push_back(arr[i]);
    }
}
for(ll val: r)
{
    cout<<val<<" ";
}

return 0;
}