#include <iostream>
using namespace std;

int main() {
	int n, x, y, z;
	int solved=0;
	cin>>n;
	while(n--)
	{
	    cin>>x>>y>>z;
	    if((x+y+z)>=2)
	        solved++;
	}
	cout<<solved;
}