
#include <iostream>
#include<cstring>
using namespace std;

int main() {
	string s;
    int t,n;
    int l,r,a;
    cin>>t;
    while(t--){
        l=0,r=0,a=0;
        cin>>n;
        cin>>s;
        for(int i=0;i<n-1;i++){
            if(s[i]=='('&&s[i+1]==')'){
                i++;
                continue;
            }
            if(s[i]=='('){
                l++;       
            }
            else{
                r++;
                if(l<r){
                    a++;
                    r--;
                }
            }
        }
        cout<<a<<endl;
    }
	return 0;
}

