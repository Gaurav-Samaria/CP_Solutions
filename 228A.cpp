#include<bits/stdc++.h>
#include<set>
using namespace std;
int main()
{
    int n;
    std::set<int> s;
    int t=4;
    while(t--){
        cin>>n;
        s.insert(n);
    }
    cout<<4-s.size();
}