#include<iostream>
#include<map>
using namespace std;
int main()
{
string s;
cin>>s;
map <char,int> alphafreq;

for(char ch:s)
{
    alphafreq[ch]++;
}
for(char i='a';i<='z';i++)
{
    if(alphafreq[i]==0)
    {
        cout<<i<<endl;
        return 0;
    }
}
cout<<"None"<<endl;

return 0;
}