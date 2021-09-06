#include <iostream>
using namespace std;

int main() {
	int a, b, temp, m;
    cin>>a>>b;
    int res=a;
    while(a>=b)
    {
        temp=a/b;
        res=res+temp;
        m=a%b;
        a=temp+m;
    }
    cout<<res<<endl;
    return 0;
}