#include <iostream>
using namespace std;

int main() {
	int i, n, m,j, temp;
	cin>>n>>m;
	int a[m];
	int sum=0;
	for(i=0;i<m;i++)
	{
	    cin>>a[i];
	}
    for(i = 0; i<m; i++) 
    {
            for(int j = i+1; j<m; j++)
            {
                if(a[j] < a[i])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
         }
    }
    sum = a[n-1]-a[0];
    for(i=0;i<=m-n;i++)
    {
        if(a[i+n-1]-a[i]<sum)
            sum = a[i+n-1]-a[i];
    }
    cout<<sum;
}
