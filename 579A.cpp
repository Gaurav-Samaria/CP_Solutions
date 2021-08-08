
#include <iostream>
using namespace std;

int main() {
    int x;
    cin>>x;
    int a = x&(x-1);
    int count=0;
    if(a==0){
        cout<<1<<endl;
    }
    else{
        while(x>0){
            x = x & (x-1);
            count++;
        }
        cout<<count;
    }
    return 0;
}