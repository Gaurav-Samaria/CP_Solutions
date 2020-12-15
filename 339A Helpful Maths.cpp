#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int j, counter=0, counter2=0;
    string s, s2;
    cin>>s;
    sort(s.begin(),s.end());
    for(j=0;j<s.length();j++)
    {
        if(s[j]=='+')
            counter++;
        counter2++;
    }
    for(j=counter;j<s.length();j++)
    {
        if(j==counter2-1)
            cout<<s[j];
        else
            cout<<s[j]<<"+";
    }
}