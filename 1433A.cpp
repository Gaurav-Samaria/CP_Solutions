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
		int num;
		cin>>num;
		int temp=num%10;
		int n=0;
		while(num>0){
			num=num/10;
			n++;
		}
		int res;
		if(n==1){
			res=(temp-1)*10+1;
		}
		else if(n==2){
			res=(temp-1)*10+3;
		}
		else if(n==3){
			res=(temp-1)*10+6;
		}
		else if(n==4){
			res=(temp-1)*10+10;
		}
		cout<<res<<"\n";
	}
	return 0;
}
