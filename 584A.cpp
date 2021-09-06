#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int n, k;
    cin>>n>>k;
    if(n>=2&&k==10)
    {
        for(int i=1;i<n;i++){
            cout<<"1";
        }
        cout<<"0\n";
    }
    else if(n<=9&&k==10){
        cout<<"-1";
    }
    else{
        for(int i=0;i<n;i++){
            cout<<k;
        }
    }
    
    
	return 0;
}

