#include <iostream>
using namespace std;

int main() {
	int n, m, i, j, flag=0;
	char c;
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
	    for(j=0;j<m;j++)
	    {
	        cin>>c;
	        if((c=='C')||(c=='M')||(c=='Y'))
	        {
	            flag++;
	            break;
	        }
	    }
	    if(flag==1)
	        break;
	}
	if(flag==0)
	    cout<<"#Black&White";
	else
	    cout<<"#Color";
}
