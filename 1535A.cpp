#include <iostream>
using namespace std;

int main() {
	// your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int a[4];
        for(int i=0;i<4;i++){
            cin>>a[i];
        }
        int highest=-1;
        int ihighest=0;
        int shighest=-1;
        int ishighest=0;
        for(int i=0;i<4;i++){
            if(a[i]>highest){
                highest=a[i];
                ihighest=i;
            }
        }
        for(int i=0;i<4;i++){
            if(a[i]>shighest && a[i]<highest){
                shighest=a[i];
                ishighest=i;
            }
        }
        if(ishighest<=1 && ihighest>=2){
            cout<<"YES"<<"\n";
        }
        else if(ihighest<=1 && ishighest>=2){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }

    }
	return 0;
}

