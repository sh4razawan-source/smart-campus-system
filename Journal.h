#ifndef JOURNAL_H
#define JOURNAL_H

#include <string>
using namespace std;

class Journal
{
public:
    string title;

    Journal(string t="")
    {
        title = t;
    }
};

#endif