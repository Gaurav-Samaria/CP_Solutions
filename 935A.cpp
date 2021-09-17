#include <iostream>
using namespace std;

int main() {
	// your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int b=2;
    int count=1;
    while(n-b!=0){
        if((n-b)%b==0)
            count++;
        b++;
    }
    cout<<count;
	return 0;
}

