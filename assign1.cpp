#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>
#include <bits/stdc++.h>
using namespace std;

int main() {

    string input;
    int buffer_length {0};
    cout << "Enter your string: ";
    cin >> input;

    for (size_t i {1}; i <= input.length(); ++i) {
        buffer_length = input.length() - i;
        string buffer (buffer_length, ' ');
        string start {input.substr(0, i-1)}; 
        if (i==1)
            cout << buffer << input[0] << endl;
        else {
            string middle {input[i-1]};
            string end {start};
            reverse(end.begin(), end.end());
            cout << buffer << start << middle << end << endl;
        }
    }
    return 0;
}