#include <iostream>
using namespace std;

int main() {
    int n;
    
cin >> n;

    if (n % 2 == 1 && n % 3 == 0)
        cout << n << " is odd and divisible by 3." << endl;
    else
        cout << n << " does not satisfy the conditions." << endl;
    return 0;
}   