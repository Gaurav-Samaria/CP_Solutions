#include <iostream>
using namespace std;

int main() {
	int x, n, crimes=0, recruit=0;
	cin>>n;
	while(n--)
	{
	    cin>>x;
	    if((recruit==0)&&(x==-1))
	        crimes++;
	    else if((recruit!=0)&&(x==-1))
	        recruit--;
	    else
	        recruit=recruit+x;
	}
	cout<<crimes;
}
