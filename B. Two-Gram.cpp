#include <iostream>
#include <string.h>
using namespace std;

int main() 
{
	int n, i, j, counter=0, temp=0, max=0;
	cin>>n;
	string s;
	cin>>s;
    string s1;
    string s2;
    string s3;
    string s4;
    for(i=0;i<n-1;i++)
    {
        counter = 0;
        s1 = s.substr(i,2); 
        for(j=i+1;j<n;j++)
        {
            s2 = s.substr(j,2);
            if((s1[0]==s2[0])&&(s1[1]==s2[1]))
            {
                s3 = s.substr(j,2);
                counter++;
            }
        }
        if(max<counter)
        {
            max=counter;
            s4 = s3;   
        }
    }
    if(max!=0)
        cout<<s4;
    else
        cout<<s1;
}