#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	if(n%2==0){
		cout<<n/2<<endl;
		for(int i=0;i<n/2;i++){
			cout<<2<<" ";
		}
	}
	else{
		int count=0;
		if(n==3){
			cout<<1<<endl;
			cout<<3;
		}
		else{
			n=n-3;
			count=1;
			count=count+n/2;
			cout<<count<<endl;
			
			for(int i=0;i<n/2;i++){
				cout<<2<<" ";
			}	
			cout<<3;
		}
	}
	return 0;
}
