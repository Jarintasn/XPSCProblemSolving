#include<iostream>
#include<vector>
using namespace std;
int main()
{
int t;
cin>>t;

while(t--)
{
    int wh;
    cin>>wh;
    vector<int> di(wh);
    for(int i=0;i<wh;i++)
    {
        cin>>di[i];
    }

    for(int i=0;i<wh;i++)
    {
        int nm;
        cin>>nm;
        for(int j=0;j<nm;j++)
        {
            char mvs;
            cin>>mvs;
            if(mvs=='D')
            { 
                if(di[i]==9) di[i]=0;
                else di[i]=di[i]+1;
            }
            else
            {
               if(di[i]==0) di[i]=9;
               else di[i]=di[i]-1;
            }
        }
    }

    for(int i=0;i<wh;i++)
    {
        cout<<di[i]<<" ";
    }
    cout<<endl;
}

return 0;
}