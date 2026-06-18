#include <iostream>
using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    if (a > b) 
        cout << "The first number is greater than the second number.";
    else if (a < b) 
        cout << "The first number is less than the second number.";
    return 0;
}