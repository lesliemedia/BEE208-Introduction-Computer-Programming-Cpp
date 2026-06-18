#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    if (n % 2 == 1) {
        cout << n << " is odd." << endl;
    } else {
        cout << n << " is even." << endl;
    }
    return 0;
}