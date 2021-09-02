
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    // your code goes here
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int b[4]={0};
    // b[0]=0;
    for(int i=0;i<n;i++){
        b[a[i]]++;
    }
    int min=INT_MAX;
    for(int i=1;i<4;i++){
        if(b[i]<min){
            min=b[i];
        }
    }
    cout<<min<<endl;
    while(min--){
        for(int i=0;i<n;i++){
            if(a[i]==1){
                cout<<i+1<<" ";
                a[i]=-1;
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(a[i]==2){
                cout<<i+1<<" ";
                a[i]=-1;
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(a[i]==3){
                cout<<i+1<<" ";
                a[i]=-1;
                break;
            }
        }
        cout<<endl;
    }
    return 0;
}