#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>
using namespace std;

int main() {

    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key  {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    
    string input;
    string output;
    string input2;
    string output2;
    char re {};

    cout << "Enter your message: ";
    getline(cin, input);

    for (size_t i{0}; i < input.length(); ++i) {
        if (isalpha(input[i])) {
            int index {alphabet.find(input[i])};
            output += key[index];
        } else {
            output += input[i];
        }
    }

    cout << output;
    cout << endl;

    cout << "Decrypt? (y/n): ";
    cin >> re;

    if (re=='y') {
        cout << "Enter string: ";
        //getline(cin, input2);
        cin >> input2;
        for (auto c: input2) {
            int pos {key.find(c)};
            if (pos != string::npos) {
                output2 += alphabet[pos];
            } else {
                output2 += c;
            }
        }
        cout << "Your output is: " << output2 << endl;
    } else 
        cout << "Goodbye" << endl;

    return 0;
} 