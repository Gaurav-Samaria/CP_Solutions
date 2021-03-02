#include <iostream>
using namespace std;

int main() {
        float n;
        cin>>n;
        float m = n;
        float x;
        float sum=0;
        while(m--)
        {
            cin>>x;
            sum = sum + (x/100);
        }
        
        cout<< (sum/n)*100;
}