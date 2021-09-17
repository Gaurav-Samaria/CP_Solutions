#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin>>s;
    char a=s[0];
    char b=s[1];
    int flag=-1;
    for(int i=0;i<5;i++){
        string temp;
        cin>>temp;
        char c=temp[0];
        char d=temp[1];
        if(a==c || b==d){
            flag=1;
            cout<<"YES"<<"\n";
            break;
        }   
    }
    if(flag==-1){
        cout<<"NO"<<"\n";
    }
	return 0;
}