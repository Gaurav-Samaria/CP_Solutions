#include <iostream>
using namespace std;

int main() {
	int n, i, temp;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
	    for(int j=i;j<n;j++)
	    {
	        if(a[j]<a[i])
	        {
	            temp=a[i];
	            a[i]=a[j];
	            a[j]=temp;
	        }
	    }
	}
	for(i=0;i<n;i++){
	    cout<<a[i]<<" ";
	}
}
