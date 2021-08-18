
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	unordered_map<string,int> m;
	while(t--){
		string s;
		cin>>s;
		auto it=m.find(s);
		if(it==m.end()){
			cout<<"OK"<<endl;
			m[s]=0;
		}
		else{
			m[s]++;
			cout<<s<<(*it).second<<endl;
		}
	}
	return 0;
}

