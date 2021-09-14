#include <iostream>
using namespace std;

int main() {
	// your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m,day;
    day=0;
    cin>>n>>m;
    while(1){
        if(n==0){
            break;
        }
        n--;
        day++;
        if(day%m==0){
            n++;
        }
    }
    cout<<day;
	return 0;
}