#ifndef _MOVIE_H
#define _MOVIE_H

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Movie {
    private:
        string name;
        string rating;
        int num_watched;
    public:
        Movie(string, string, int);
        ~Movie();
        void watch();
        void display();
        string find_name();
};

#endif