#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int h[n];
	int a[n];
	int res=0;
	for(int i=0;i<n;i++){
		cin>>h[i]>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if ((i!=j)&&(h[i]==a[j]))
			{
				res++;
				/* code */
			}
		}
	}
	cout<<res;
}