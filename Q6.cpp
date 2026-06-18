#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (isupper(ch)) 
        cout << "The character is an uppercase letter.";
    else if (islower(ch)) 
        cout << "The character is a lowercase letter.";
    else
        cout << "The character is not a letter.";
    return 0;
}