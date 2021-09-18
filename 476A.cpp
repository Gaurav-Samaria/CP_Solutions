#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int m, n;
	cin>>n>>m;
	if(n<m){
		cout<<"-1";
	}
	else{
		int count=0;
		while(n>0){
			if(n>=2){
				n=n-2;
				count++;
			}
			else{
				n=n-1;
				count++;
			}
		}	
		if(count%m==0){
			cout<<count;
		}
		else{
			while(count%m!=0){
				count=count+1;
			}
			cout<<count;
		}
	}
    return 0;
}