#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
    cin>>n;
    vector<long long> a;
    for(int i=0;i<n;i++){
        long long temp;
        cin>>temp;
        a.push_back(temp);
    }
    vector<long long> b;
    for(int i=0;i<n-1;i++){
        long long temp;
        cin>>temp;
        b.push_back(temp);
    }
    vector<long long> c;
    for(int i=0;i<n-2;i++){
        long long temp;
        cin>>temp;
        c.push_back(temp);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    sort(c.begin(),c.end());
    int i=0;
    
    while(1){
        if(a[i]!=b[i]){
            cout<<a[i]<<endl;
            break;
        }
        i++;
    }
    i=0;
    while(1){
        if(b[i]!=c[i]){
            cout<<b[i]<<endl;
            break;
        }
        i++;
    }
	return 0;
}

