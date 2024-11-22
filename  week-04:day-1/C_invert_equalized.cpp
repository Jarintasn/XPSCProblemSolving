 #include<iostream>
 #include<string>
 using namespace std;

 int main()
 {
 
 int t; cin>>t;
 while(t--)
 {
    int x; cin>>x;
    string v; cin>>v;
    
    int cnt_0=0,cnt_1=0;

    if(v[0]=='0') cnt_0++;
    else cnt_1++;

for(int i=1;i<x;i++){
    if(v[i]!=v[i-1])
    {
        if(v[i]=='0') cnt_0++;
        else cnt_1++;
    }
}
cout<<min(cnt_0,cnt_1)<<endl;
   
 }
 
 return 0;
 }