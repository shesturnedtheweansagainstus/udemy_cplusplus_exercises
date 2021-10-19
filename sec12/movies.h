#ifndef _MOVIES_H
#define _MOVIES_H

#include <iostream>
#include <vector>
#include <string>
#include "movie.h"
using namespace std;

class Movies {
    private:
        static int movie_num;
        vector<Movie> store {};
    public:
        Movies();
        ~Movies();
        void add_movie(string, string, int);
        void display_all();
        bool watch_movie(string);
        static void find_movie_num();
};

#endif