
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k;
    cin>>n>>k;
    int a[n];
    int count=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int i=n-1;
    while(i>=0){
        if(a[i]+k<=5){
            if(i>=2){
                count++;
                i=i-3;
                continue;
            }
        }
        i--;
    }
    cout<<count;
	return 0;
}

