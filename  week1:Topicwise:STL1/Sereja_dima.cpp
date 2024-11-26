#include<iostream>
#include<deque>
using namespace std;
int main()
{
    int n; cin>>n;
deque<int> dq(n);

for(int i=0;i<n;i++)
{
    cin>>dq[i];
}
int s=0,d=0;


for(int i=1;i<=n;i++)
{
    int mx;
    if(i%2!=0)
    {
        
         mx=max(dq.front(),dq.back());
        s+=mx;
    }
    else
    {
       mx=max(dq.front(),dq.back()); 
      d+=mx; 
    }
    if(mx==dq.front()) dq.pop_front();
    else dq.pop_back();
}
cout<<s<<" "<<d<<endl;

return 0;
}