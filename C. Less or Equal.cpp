#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	long long int i, j, n, k;
	cin>>n>>k;
	int a[n];
	int temp;
	for(i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	sort(a,a+n);
	if(k==0 && a[0]>1)
        cout<<"1"<<endl;

    else if(k==0 && a[0]==1)
        cout<<"-1"<<endl;
        
	else if(n==k)
	{
	    cout<<a[k-1];
	}
	else if(k<=n-1)
	{
        if(a[k-1]!=a[k])
            cout<<a[k-1]<<endl;
        else
            cout<<"-1"<<endl;
    }
}