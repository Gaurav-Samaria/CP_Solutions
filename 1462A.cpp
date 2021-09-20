#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int i=0;
        int j=n-1;
        int b[n];
        int k=0;
        int turn=1;
        while(i<=j){
            if(turn%2!=0){
                b[k]=a[i];
                i++;
                turn++;
                k++;
            }
            else{
                b[k]=a[j];
                j--;
                turn++;
                k++;
            }
        }
        for(int i=0;i<n;i++){
            cout<<b[i]<<" ";
        }
        cout<<"\n";
    }
	return 0;
}

//3 1 4 1 5 9 2

//3 5 9 1 1 2 4
