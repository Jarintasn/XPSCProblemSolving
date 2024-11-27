#include<iostream>
#define ll long long int
using namespace std;
int main()
{
int n;
cin>>n;

ll arr[n];
ll sum=0;

for(int i=0;i<n;i++)
{
    cin>>arr[i];
    sum+=arr[i];
}
if(sum%2==0)
{
     cout<<sum<<endl;

 }
 else{
    ll minodd=LLONG_MAX;
for(int i=0;i<n;i++)
 {
  if(arr[i]%2!=0)
  {
    minodd=min(minodd,arr[i]);
  }
  }
  cout<<sum-minodd<<endl;
 }
 
return 0;
}
 