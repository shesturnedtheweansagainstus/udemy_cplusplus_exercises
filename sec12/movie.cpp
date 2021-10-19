#include <iostream>
#include <vector>
#include <string>
#include "movie.h"
using namespace std;


Movie::Movie(string name_val, string rating_val, int num_watched_val) 
    : name{name_val}, rating{rating_val}, num_watched{num_watched_val} {
    }

Movie::~Movie() {
}

void Movie::watch() {
    num_watched += 1;
    cout << endl;
    cout << "You have watched " << name << " " << num_watched << " times." << endl;
}

void Movie::display() {
    cout << endl;
    cout << "--------------------------------" << endl;
    cout << "Name: " << name << endl;
    cout << "Times watched: " << num_watched << endl;
    cout << "Rating: " << rating << endl; 

}

string Movie::find_name() {
    return name;
}