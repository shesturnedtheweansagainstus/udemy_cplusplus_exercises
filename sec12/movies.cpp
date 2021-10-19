#include <iostream>
#include <vector>
#include <string>
#include "movie.h"
#include "movies.h"
using namespace std;

Movies::Movies() {
}

Movies::~Movies() {

}

int Movies::movie_num = 0;

void Movies::add_movie(string name_val, string rating_val, int num_watched_val) {
    if (rating_val!="G" and rating_val!="PG" and rating_val!="PG-13" and rating_val!="R") {
        cout << endl << "Invalid Data" << endl;
    }
    else if (num_watched_val < 0) {
        cout << endl << "Invalid Data" << endl;
    } else {
        store.push_back(Movie(name_val, rating_val, num_watched_val));
        ++movie_num;
    }
}

void Movies::display_all() {
    for (auto i: store) {
        i.display();
    }
}

bool Movies::watch_movie(string movie_name) {
    for (auto i: store) {
        if (i.find_name()==movie_name) {
            i.watch();
            return true;
        }
    }
    cout << endl << "No such movie." << endl;
    return false;
}

void Movies::find_movie_num() {
    cout << endl << "Total number of movies in store: " << movie_num << endl<<endl;
}
