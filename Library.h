#ifndef LIBRARY_H
#define LIBRARY_H

#include <iostream>
#include <string>
using namespace std;
class Library
{
    private:
        string libraryName;
        string location;
        int totalBooks;
        int issuedBooks;
        int totalJournals;

    public:

        Library()
        {
            libraryName = "HITEC UNIVERSITY LIBRARY";
            location = "Taxila, Pakistan";
            totalBooks = 5000;
            issuedBooks = 0;
            totalJournals = 500;
        }

        void setlibraryName(string name) { libraryName = name; }
        void setlocation(string loc) { location = loc; }
        void settotalBooks(int total) { totalBooks = total; }
        void setissuedBooks(int issued) { issuedBooks = issued; }
        void settotalJournals(int journals) { totalJournals = journals; }

        string getlibraryName() { return libraryName; }
        string getlocation() { return location; }
        int gettotalBooks() { return totalBooks; }
        int getissuedBooks() { return issuedBooks; }
        int gettotalJournals() { return totalJournals; }

        void addBook()
        {
            totalBooks++;
            cout << "\n========================================\n";
            cout << "\n BOOK ADDED TO LIBRARY SUCCESSFULLY!\n";
            cout << "\n========================================\n";
        }

        void issueBook()
        {
            if (totalBooks > issuedBooks)
            {
                totalBooks--;
                issuedBooks++;
                cout << "\n========================================\n";
                cout << "\n BOOK ISSUED SUCCESSFULLY!\n";
                cout << "\n========================================\n";
            }
            else
            {
                cout << "\n========================================\n";
                cout << "\n NO BOOKS AVAILABLE TO ISSUE!\n";
                cout << "\n========================================\n";
            }
        }

        void returnBook()
        {
            if (issuedBooks > 0)
            {
                totalBooks++;
                issuedBooks--;
                cout << "\n========================================\n";
                cout << "\n BOOK RETURNED SUCCESSFULLY!\n";
                cout << "\n========================================\n";
            }
            else
            {
                cout << "\n========================================\n";
                cout << "\n NO BOOKS TO RETURN!\n";
                cout << "\n========================================\n";
            }
        }

            void displaylibrary()
            {
                cout << "\n=================================" << endl;
                cout << "\n        LIBRARY DETAILS      " << endl;
                cout << "\n=================================" << endl;

                cout << "\nLibrary Name: " << libraryName << endl;
                cout << "Location: " << location << endl;
                cout << "Total Books: " << totalBooks << endl;
                cout << "Issued Books: " << issuedBooks << endl;
                cout << "Total Journals: " << totalJournals << endl;
                cout << "\n=================================" << endl;
            }
};
#endif
