
#include <iostream>
using namespace std;

int main() {
	int t, n, multiple, count;
    cin>>t;
    while(t--){
        count =0;
        cin>>n;
        int x = n;
        multiple = 1;
        while(x>0){
            if(x%10!=0){
                count++;
            }
            x=x/10;
        }
        cout<<count<<endl;
        
        while(n>0){
            if(n%10!=0){
                cout<<(n%10)*multiple<<" ";
            }
            multiple = multiple*10;
            n=n/10;
            // cout<<endl;
        }
        cout<<endl;
    }
	return 0;
}

