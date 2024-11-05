#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main()
{

int n,q;
cin>>n>>q;

vector<int> a(n+1),cnt(n+1);

for(int i=1;i<=n;i++)
{
    cin>>a[i];
}

set<int> s;

for(int i=n;i>=1;i--)
{
    s.insert(a[i]);
    cnt[i]=s.size();
}

for(int i=1;i<=q;i++)
{
    int x;cin>>x;
     if (x >=1 && x<= n) {
        cout<<cnt[x]<< endl;
    } else {
        cout<<"Invalid query index"<< endl;  
    }
     
}


return 0;
}