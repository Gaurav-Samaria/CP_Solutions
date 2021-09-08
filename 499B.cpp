#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n,m;
    cin>>n>>m;
    unordered_map<string,string> mp;
    for(int i=0;i<m;i++){
        string a;
        string b;
        cin>>a>>b;
        mp[a]=b;
    }
    
    while(n--){
        string s;
        cin>>s;
        auto it=mp.find(s);
        string temp;
        temp=(*it).second;
        // cout<<temp<<endl;
        if(temp.length()<s.length()){
            cout<<temp<<" ";
        }
        else{
            cout<<s<<" ";
        }
    }
	return 0;
}
