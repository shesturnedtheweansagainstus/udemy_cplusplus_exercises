#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    char selection {};
    vector <int> vec {1, 2, 3};

    while (true) {
        cout << "P - print numbers" << endl;
        cout << "A - add number" << endl;
        cout << "M - Display the mean of numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "Q - quit program" << endl;
        cout << "Enter: ";
        cin >> selection;

        if (selection == 'P' or selection =='p'){
            cout << "[";
            for (auto i: vec)
                cout << " " << i << " ";
            cout << "]" << endl;
        }
        else if (selection == 'A' or selection == 'a'){
            int num {0};
            cout << "Enter a number: ";
            cin >> num;
            vec.push_back(num);
            cout << endl;
        }
        else if (selection == 'M' or selection == 'm'){
            int num {0};
            for (auto i: vec)
                num += i;
            num = num / static_cast<double>(vec.size());
            cout << "The mean is: " << num << endl;
        }
        else if (selection=='S' or selection=='s'){
            int small {vec[0]};
            for (auto i: vec){
                if (i < small){
                    small = i;
                }
            }
            cout << "The smallest number is: " << small << endl;
        }
        else if (selection=='Q' or selection=='q')
            break;
    }
}
