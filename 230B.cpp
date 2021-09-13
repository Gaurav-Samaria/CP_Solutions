#include<bits/stdc++.h>
using namespace std;

bool isPrime(long long n)
{
    if (n <= 1)
        return false;

    for (long long i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}

bool check(long double n){
   if(ceil(n) == floor(n))
        return true;
   return false;
}

void helper(long long n){
    long double temp=sqrt(n);
    if(check(temp)){
        if(isPrime(temp)){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
    else{
            cout<<"NO"<<"\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long n;
    cin>>n;
    long long a[n];
    for(long i=0;i<n;i++){
        cin>>a[i];
    }
    for(long i=0;i<n;i++){
        helper(a[i]);
    }

  return 0;
}
