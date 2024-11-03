#include<iostream>
#include<map>
#include<string>
using namespace std;
bool isvalid(string s)
{
string target="Timur";

map<char,int>targetfreq={{'T',1},{'i',1},{'m',1},{'u',1},{'r',1}};

map<char,int>sfreq;

for(char ch:s)
{
    sfreq[ch]++;
}
return targetfreq==sfreq;
}
int main()
{
int t;
cin>>t;
while(t--)
{
    int n;
    string s;
    cin>>n>>s;

    if(n!=5) cout<<"NO"<<endl;
    else{
        if(isvalid(s)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

return 0;
}