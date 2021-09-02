
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    string s;
    getline(cin,s);
    // cout<<s;
    unordered_set<char> st;
    for(int i=0;i<s.length();i++){
        if(s[i]>='a'&&s[i]<='z'){
            st.insert(s[i]);
        }
    }
    cout<<st.size();
	return 0;
}

