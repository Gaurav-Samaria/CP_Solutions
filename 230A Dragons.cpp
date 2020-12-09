#include <iostream>
using namespace std;

int main() {
	int s, n, i, j, temp, flag=0;
	cin>>s>>n;
	int a[n], b[n];
	for(i=0;i<n;i++)
	{
	    cin>>a[i]>>b[i];
	}
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(a[j]<a[i])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
                temp=b[j];
                b[j]=b[i];
                b[i]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(s<=a[i])
        {   
            flag=1;
            cout<<"NO";
            break;
        }
        else
        {
            s = s + b[i];
        }
    }
    if(flag!=1)
        cout<<"YES";
}