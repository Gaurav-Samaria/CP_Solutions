//C++ 17  Time - 15ms
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
        long long a, b, n;
        long count=0;
        cin>>a>>b>>n;
        while(a<=n && b<=n){
            if(a>b){
                b=a+b;
                count++;
            }
            else{
                a=a+b;
                count++;
            }
        }
        cout<<count<<"\n";
    }
	return 0;
}

