#ifndef LIBRARYCATALOG_H
#define LIBRARYCATALOG_H

#include <iostream>
#include <string>

using namespace std;

class LibraryCatalog
{
private:
    // Attributes
    string catalogID;
    string lastUpdated;
    int totalBooksInCatalog;
    int totalJournalsInCatalog;
    string sectionName;

public:
    LibraryCatalog()
    {
        catalogID = "CAT-MAIN-01";
        lastUpdated = "05-06-2026";
        totalBooksInCatalog = 0;
        totalJournalsInCatalog = 0;
        sectionName = "Central Academic Section";
    }
    void setCatalogID(string id) { catalogID = id; }
    void setLastUpdated(string date) { lastUpdated = date; }
    void setTotalBooksInCatalog(int bCount) { totalBooksInCatalog = bCount; }
    void setTotalJournalsInCatalog(int jCount) { totalJournalsInCatalog = jCount; }
    void setSectionName(string sName) { sectionName = sName; }
    string getCatalogID() { return catalogID; }
    string getLastUpdated() { return lastUpdated; }
    int getTotalBooksInCatalog() { return totalBooksInCatalog; }
    int getTotalJournalsInCatalog() { return totalJournalsInCatalog; }
    string getSectionName() { return sectionName; }
    void updateCatalog()
    {
        lastUpdated = "05-06-2026"; // Current date sync
        cout << "\n=======================================";
        cout << "\n      CATALOG UPDATED SUCCESSFULLY     ";
        cout << "\n=======================================\n";
    }

    void searchItem(string title)
    {
        cout << "\n=======================================";
        cout << "\n  SEARCHING: \"" << title << "\"...";
        cout << "\n=======================================";
        cout << "\nStatus:          [ ITEM FOUND ]        ";
        cout << "\nLocation:        Shelf-B, Row-3        ";
        cout << "\n=======================================\n";
    }
    void displayCatalog()
    {
        cout << "\n=======================================";
        cout << "\n            LIBRARY CATALOG            ";
        cout << "\n=======================================";
        cout << "\nCatalog ID:      " << catalogID;
        cout << "\nSection Name:    " << sectionName;
        cout << "\nTotal Books:     " << totalBooksInCatalog;
        cout << "\nTotal Journals:  " << totalJournalsInCatalog;
        cout << "\nLast Updated:    " << lastUpdated;
        cout << "\n=======================================\n";
    }
};

#endif