#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
	    int xr=0;
	    int n; cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	      cin>>arr[i];
	      xr^=arr[i];
	    }
	    int ans=xr;
	  for(int i=0;i<n;i++)
	    {
	        ans=min(ans,xr^arr[i]);
	    }
	    cout<<ans<<endl;
	}

}
