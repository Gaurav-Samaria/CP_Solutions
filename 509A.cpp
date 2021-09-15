#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	int a[t][t];
	for(int i=0;i<t;i++){
		for(int j=0;j<t;j++){
			if(i==0||j==0){
				a[i][j]=1;
			}
			else{
				a[i][j]=a[i-1][j]+a[i][j-1];
			}
		}
	}
	int max=INT_MIN;
	for(int i=0;i<t;i++){
		for(int j=0;j<t;j++){
			if(max<a[i][j]){
				max=a[i][j];
			}
		}
	}
	cout<<max<<"\n";
	return 0;
}
