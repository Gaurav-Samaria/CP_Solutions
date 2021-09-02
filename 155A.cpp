
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int mx,mi,n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    mx=a[0];
    mi=a[0];
    int count=0;
    for(int i=1;i<n;i++){
        if(a[i]>mx){
            count++;
            mx=a[i];
        }
        if(a[i]<mi){
            count++;
            mi=a[i];
        }
    }
    cout<<count<<endl;
	return 0;
}

