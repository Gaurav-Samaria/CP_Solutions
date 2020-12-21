#include <iostream>
using namespace std;

int main() {
	string s;
	int count=1;
	int i=0;
	cin>>s;
	int x=s.length();
	for(i=0;i<x;i++)
	{
	    if(s[i]=='W'&& s[i+1]=='U' && s[i+2]=='B')
	    {
	        i+=2;
	        if(!count)
	        {
	            cout<<" ";
	        }
	        continue;
	    }
	    else 
	    {
	        count=0;
	        cout<<s[i];
	    }
	}
	return 0;
}