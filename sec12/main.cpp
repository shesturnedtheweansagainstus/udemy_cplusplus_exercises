#include <iostream>
#include <vector>
#include <string>
#include "movie.h"
#include "movies.h"
using namespace std;

int main() {

    Movies movie_store {};
    string input {};
    string name {};
    string rate {};
    int num_watched {0};

    do {
        cout << "(1) Enter a new movie \n(2) Watch a movie in the store\n(3) Display all the movies \n(4) Number of Movies\n(5) Quit\n";
        cout << "Enter: ";
        cin >> input;

        if (input=="1") {
            cout << endl << "Enter the name, rating and number of times watched: ";
            cin >> name >> rate >> num_watched;
            movie_store.add_movie(name, rate, num_watched);
            cout << endl;
        }
        else if (input=="2") {
            cout << endl << "Enter the name: ";
            cin >> name;
            movie_store.watch_movie(name);
            cout << endl;
        }
        else if (input=="3") {
            movie_store.display_all();
            cout << endl; 
        } 
        else if (input=="4") {
            movie_store.find_movie_num();
        } else {
            if (input!="5")
                cout << endl << "Try again!" << endl;
        }

    } while (input!="5");
    
    cout << endl << "Goodbye" << endl;

    return 0;
}