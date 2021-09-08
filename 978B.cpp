#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<s.length()-2;i++){
        if(s[i]=='x' && s[i+1]=='x' && s[i+2]=='x'){
            count++;
        }
    }
    cout<<count;
	return 0;
}

