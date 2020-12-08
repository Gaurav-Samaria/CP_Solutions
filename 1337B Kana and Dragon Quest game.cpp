#include <iostream>
using namespace std;

int main() {
	int i, t, n, m, x, flag;
	cin>>t;
	while(t--)
	{
	    flag=0;
	    cin>>x>>n>>m;
	    if(x>10)
	    {
	        for(i=1;i<=n;i++)
	            {
	                if(x<=0)
	                {
	                    cout<<"YES"<<endl;
	                    flag=1;
	                    break;
	                }
	                else
	                    x=(x/2) + 10;
	            }
	    
	            if(x>0)
	            {
	                for(i=1;i<=m;i++)
	                {
	                    x = x - 10;
	                    if(x<=0)
	                    {
	                        cout<<"YES"<<endl;
	                        flag=1;
	                        break;
	                    }
	                }
	            }
	    }
	    else if((x<=10)&&(m>=1))
	    {
	        cout<<"YES"<<endl;
	        flag=1;
	    }
	    if(flag==0)
	        cout<<"NO"<<endl;
	}
}
