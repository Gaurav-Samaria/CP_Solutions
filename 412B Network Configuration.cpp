#include <iostream>
using namespace std;

int main() {
	int i, n, k, temp;
	cin>>n>>k;
	int a[n];
	for(i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
	    for(int j=i;j<n;j++)
	    {
	        if(a[j]>a[i])
	        {
	            temp=a[i];
	            a[i]=a[j];
	            a[j]=temp;
	        }
	    }
	}
	cout<<a[k-1];
}
