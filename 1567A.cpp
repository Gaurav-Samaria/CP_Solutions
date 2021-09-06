
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n;
        cin>>s;
        string res;
        for(int i=0;i<n;i++){
            char temp;
            if(s[i]=='U'){
                res=res+'D';
            }
            else if(s[i]=='D'){
                res=res+'U';
            }
            else{
                res=res+s[i];
            }
        }
        cout<<res<<endl;
    }
	return 0;
}

