#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    unordered_map<string,int> mp;
    string s;
    int n;
    cin>>n;
    while(n--){
        cin>>s;
        mp[s]++;
    }
    string wint;
    int max=INT_MIN;
    for(auto it:mp){
        if(it.second>max){
            max=it.second;
            wint=it.first;
        }
    }
    cout<<wint;
	return 0;
}

