#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;

    cout << "Enter a string: ";
    cin >> text;

    if (text == "Hello") 
        cout << "The string is Hello.";
    else
        cout << "The string is not Hello.";
    return 0;
}