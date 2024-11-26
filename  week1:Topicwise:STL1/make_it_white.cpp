#include<iostream>
using namespace std;
int main()
{
int t; cin>>t;
while(t--)
{
    int n; cin>>n;
    string s;
    cin>>s;

    cout<<s.rfind('B')-s.find('B')+1<<endl; 
}

return 0;
}