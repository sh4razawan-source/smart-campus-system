#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book
{
public:
    string title;
    string author;

    Book(string t="", string a="")
    {
        title = t;
        author = a;
    }
};

#endif