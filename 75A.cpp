
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	long long a,b;
	cin>>a;
	cin>>b;
	long long sum1=a+b;
	while(a>0){
		int temp=a%10;
		v1.push_back(temp);
		a=a/10;
	}
	for(int i=v1.size()-1;i>=0;i--){
		if(v1[i]!=0){
			a=10*a+v1[i];
		}
	}
	while(b>0){
		int temp=b%10;
		v2.push_back(temp);
		b=b/10;
	}
	for(int i=v2.size()-1;i>=0;i--){
		if(v2[i]!=0){
			b=10*b+v2[i];
		}
	}
	long long sum2=a+b;
	while(sum1>0){
		int temp=sum1%10;
		v3.push_back(temp);
		sum1=sum1/10;
	}
	for(int i=v3.size()-1;i>=0;i--){
		if(v3[i]!=0){
			sum1=10*sum1+v3[i];
		}
	}
	if(sum1==sum2){
		cout<<"YES"<<"\n";
	}
	else{
		cout<<"NO"<<"\n";
	}
	return 0;
}

