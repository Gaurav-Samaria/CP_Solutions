#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    string s;
    string t;
    cin>>s;
    cin>>t;
    int pos=0;
    for(int i=0;i<t.length();i++){
        if(t[i]==s[pos]){
            pos++;
        }
    }
    cout<<pos+1;
	return 0;
}

