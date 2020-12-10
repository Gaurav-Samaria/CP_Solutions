#include <iostream>
using namespace std;

int main() 
{
	int r, g, b;
	int min=-1;
	cin>>r>>g>>b;
	while(1)
	{
	    if(r>0)
	    {
	        r=r-2;
	        min++;
	    }
	    else if((g>0)||(b>0))
	        min++;
	    if(g>0)
	    {
	        g=g-2;
	        min++;
	    }
	    else if((b>0)||(r>0))
	        min++;
	    if(b>0)
	    {
	        b=b-2;
	        min++;
	    }
	    else if((r>0)||(g>0))
	        min++;
	    if((r<=0)&&(g<=0)&&(b<=0))
	        break;
	}
	cout<<30+min;
}