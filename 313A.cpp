#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long num;
	cin>>num;
	if(num<-9){
		long long f=num/10;
		// cout<<f<<endl;
		int temp1=num%10;        
    	num=num/10;                    
		int temp2=num%10;                  
    	num=num-temp2+temp1;
		// cout<<num<<endl;
		cout<<max(f,num);
	}
	else if(num<=0&&num>=-9){
		cout<<0;
	}
	else{
		cout<<num;
	}
	return 0;
}