#include <iostream>
using namespace std;

int main() {
	int i, n, temp, sum=0;
	cin>>n;
	int a[n];
	int sum2=0;
	int counter=0;
	for(i=0;i<n;i++)
	{
	    cin>>a[i];
	    sum=sum+a[i];
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
	for(i=n-1;i>=0;i--)
	{
	    sum2=sum2+a[i];
	    counter++;
	    if(sum2>=((sum/2)+1))
	    {
	        break;
	    }
	}
	cout<<counter;
}
