#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int i, j, temp, n, diff, t;
    cin>>t;
    while(t--){
        cin>>n;
        int s[n];
        for(i=0;i<n;i++)
        {
            cin>>s[i];
        }
        sort(s, s+n);
        i=0,j=n-1;
        temp=s[n-1]-s[0];
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++){
                diff=s[j]-s[i];
                if(diff<temp){
                    temp=diff;
                }
            }
        }
        cout<<temp<<endl;
    }
}
