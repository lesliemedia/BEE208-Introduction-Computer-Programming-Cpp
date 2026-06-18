#include <iostream>
using namespace std;

int main() {
    int a,b,c;

    cout << "Enter three integers: ";
    cin >> a >> b >> c;

    if (a == b && b == c) 
        cout << "All numbers are equal.";
    else
        cout << "All numbers are not equal.";
    return 0;
}