
#include <iostream>
#include<cstring>
using namespace std;

int main() {
	string a;
    int t, n;
    int i=0;
    cin>>t;
    while(t--){
        cin>>a;
        n=a.length();
        if(n<=2){
            cout<<a;
        }
        else{
            i=2;
            cout<<a[0];
            while(i<n-1){
                
                cout<<a[i];
                i=i+2;
            }
            cout<<a[n-1];
        }
        cout<<endl;
    }
	return 0;
}

