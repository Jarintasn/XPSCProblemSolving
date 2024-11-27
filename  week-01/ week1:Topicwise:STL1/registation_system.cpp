#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
    int t;
    cin>>t;
    map<string,int> mp;

    while(t--)
    {
        string s; cin>>s;
            if(mp[s]==0)
            {
                cout<<"OK"<<endl;
                mp[s]++;
            }
            else{
                cout<<s<<mp[s]<<endl;
                mp[s]++;
            }
        
    }


return 0;
}