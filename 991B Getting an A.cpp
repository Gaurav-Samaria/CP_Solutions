#include <iostream>
using namespace std;

int main() {
	int n, temp, i, j, counter=0;
	float sum=0;
	cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
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
                }
            }
        }
    if((sum/n)>=4.5)
        cout<<"0";
    else
    {
        for(i=0;i<n;i++)
        {
            sum=sum-a[i];
            a[i]=5;
            sum=sum+a[i];
            counter++;
            if((sum/n)>=4.5){
                cout<<counter;
                break;
            }
        }
    }
}