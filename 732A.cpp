
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n=1;
    int k,r;
    cin>>k>>r;
    int amount=k;
    while(1){
        if(amount%10==0){
            break;
        }
        else if((amount-r)%10==0){
            break;
        }
        n++;
        amount=amount+k;
    }
    cout<<n;
	return 0;
}

