#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, m, a, b, cost1, cost2=0, cost3=0;
	cin>>n>>m>>a>>b;
	cost1=n*a;
	int n1=n;
	while(n > 0)
	{
	    if(n >= m)
	    {
	        n = n - m;
	        cost2 = cost2 + b;
	    }
	    else
	    {
	        cost2 = cost2 + (n*a);
	        break;
	    }
	}
	while(n1 > 0)
	{
	    if(n1 >= 0)
	    {
	        n1 = n1 - m;
	        cost3 = cost3 + b;
	    }
	}
	if((cost1<=cost2)&&(cost1<=cost3))
	    cout<<cost1;
	else if((cost2<=cost1)&&(cost2<=cost3))
	    cout<<cost2;
	else
	    cout<<cost3;
}
