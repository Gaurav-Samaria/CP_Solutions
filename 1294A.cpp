#include <iostream>
using namespace std;

int maximum(int A, int B, int C){
    if (A >= B && A >= C)
        return A;
  
    if (B >= A && B >= C)
        return B;
  
    if (C >= A && C >= B)
        return C;
    return -1;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int a,b,c,n;
        cin>>a>>b>>c>>n;
        int max=maximum(a,b,c);
        // cout<<max<<"\n";
        int diff=(max-a)+(max-b)+(max-c);
        // cout<<diff<<"\n";
        if(diff<=n){
            n=n-diff;
            if(n%3==0){
                cout<<"YES"<<"\n";
            }
            else{
                cout<<"NO"<<"\n";
            }
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
	return 0;
}
