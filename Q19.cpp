#include <iostream>
#include <bitset>
using namespace std;

int main() {
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    int decimal = stoi(binary, 0, 2);

    cout << "The decimal equivalent is: " << decimal << endl;
    cout << "The hexadecimal equivalent is: " << hex << decimal << endl;
    cout << "The octal equivalent is: " << oct << decimal << endl;
    return 0;
}