#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;

    getline(cin, text);

    if (text.find('a') != string::npos) 
        cout << "The string contains the letter 'a'.";
    else
        cout << "The string does not contain the letter 'a'.";
    return 0;
}