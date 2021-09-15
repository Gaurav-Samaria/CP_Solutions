#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		if(a==b){
			cout<<0<<"\n";
			continue;
		}
		int temp=a-b;
		if(temp<0){
			int x=abs(temp);
			if(x%2==0){
				cout<<2<<"\n";
			}
			else{
				cout<<1<<"\n";
			}
		}
		else{
			int x=abs(temp);
			if(x%2==0){
				cout<<1<<"\n";
			}
			else{
				cout<<2<<"\n";
			}
		}
	}

	return 0;
}
