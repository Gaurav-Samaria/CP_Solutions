#include <iostream>
using namespace std;

int main() {
            int i, n, sum = 0;
            int counter = 0;
            int sum2 = 0;
            int j=1;
            cin>>n;
            int a[n];
            int b[n];
            for(i=0;i<n;i++)
            {
                cin>>a[i];
                sum=sum+a[i];
            }
            b[0]=1;
            sum2 = a[0];

            for(i=1;i<n;i++)
            {
                if(a[0]>=(2*a[i]))
                {
                    counter++;
                    b[j]=i+1;
                    j++;
                    sum2 = sum2 + a[i];
                }
                if(sum2>=((sum/2)+1))
                    break;
            }
            if((counter==0)||(sum2<(sum/2)+1))
            {
                if(a[0]>=((sum/2)+1))
                {
                    cout<<"1"<<endl;
                    cout<<"1";
                }
                else if(sum2<(sum/2)+1)
                    cout<<"0";
            }
            else{
                if(a[0]>=((sum/2)+1))
                    cout<<counter<<endl;
                else
                    cout<<counter+1<<endl;
                for(i=0;i<=counter;i++)
                    cout<<b[i]<<" ";
            }
}
