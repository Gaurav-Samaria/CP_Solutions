
#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int n;
    long long l;
    cin>>n>>l;
    long long a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    double maxd=a[0];
    for(int i=0;i<n-1;i++){
        long double x=abs(a[i]-a[i+1]);
        x=x/2;
        if(x>maxd){
            maxd=x;
        }
    }
    long long lmd=l-a[n-1];
    if(lmd>maxd){
        maxd=lmd;
    }
    cout.precision(20);
    cout << fixed << maxd << endl;
    return 0;
}