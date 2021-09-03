#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin>>t;
    while(t--){
        string s;
        int n;
        unordered_set<char> st;
        int i=0;
        cin>>n;
        cin>>s;
        s=s+'1';
        int flag=1;
        while(i<n){
            auto it = st.find(s[i]);
            if(it!=st.end()){
                cout<<"NO"<<endl;
                flag=-1;
                break;
            }
            else{
                if(s[i]==s[i+1]){
                    i++;
                }
                else{
                    st.insert(s[i]);
                    i++;
                }
            }
        }
        if(flag==1){
            cout<<"YES"<<endl;
        }
    }
	return 0;
}

