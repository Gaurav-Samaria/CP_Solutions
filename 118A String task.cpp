#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	string s;
	cin>>s;
	int x=s.length();
	transform(s.begin(),s.end(),s.begin(),::tolower);
	for(int i=0;i<x;i++)
	{
	    if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u')||(s[i]=='y'))
	    {
	        continue;
	    }
	    else
	    {
	        cout<<"."<<s[i];
	    }
    }
}
