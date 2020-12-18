#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int i, j, temp, t, n, k, counter, sum;
    cin>>t;
    while(t--){
        cin>>n>>k;
        counter=0;
        sum=0;
        int a[n];
        int b[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<n;i++){
            cin>>b[i];
        }
        sort(a, a+n);
        sort(b, b+n);
        i=0,j=n-1;
        while(counter!=k){
            if(a[i]<b[j]){
                temp=a[i];
                a[i]=b[j];
                b[j]=temp;
                i++;
                j--;
                counter++;
            }
            else{
                break;
            }
        }
        for(i=0;i<n;i++)
        {
            sum=sum+a[i];
        }
        cout<<sum<<endl;
    }
}
