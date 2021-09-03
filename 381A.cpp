#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
	int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
	int i=0;
    int j=n-1;
    int ssum=0;
    int dsum=0;
    int turn=0;
    while(i<=j){
        if(turn%2==0){
            // ssum=ssum+max(a[i],a[j]);
            if(a[i]>a[j]){
                ssum=ssum+a[i];
                i++;
            }
            else{
                ssum=ssum+a[j];
                j--;
            }
            turn++;
        }
        else{
            // dsum=dsum+max(a[i],a[j]);
            if(a[i]>a[j]){
                dsum=dsum+a[i];
                i++;
            }
            else{
                dsum=dsum+a[j];
                j--;
            }
            turn++;
        }
    }
	cout<<ssum<<" "<<dsum<<endl;
	return 0;
}