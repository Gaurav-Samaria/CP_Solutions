#include <iostream>
using namespace std;


int main() {
    int j = 0, count = 0;
    string a, b = "hello";
    cin >> a;
    for (int i = 0; i < a.size(); i++) 
    {
        if (a[i] == b[j]) {
            j++;
            count++;
            
            if (count== 5) {
                break;
            }
        }
    }
    if (count == 5) {
        cout << "YES";
    } 
    else {
        cout << "NO";
    }
}