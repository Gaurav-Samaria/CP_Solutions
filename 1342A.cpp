#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        long long x,y,a,b;
    	cin>>x>>y;
    	cin>>a>>b;
    	long long ans=LONG_MAX;
    	long long diff=abs(y-x);
    	ans=(x+y)*a;
    	if(x<y)
            ans=min(ans,x*b+diff*a);
        else
            ans=min(ans,y*b +diff*a);
    	cout<<ans<<endl;
    }
	return 0;
}

