#ifndef JOURNAL_H
#define JOURNAL_H

#include<iostream>
#include <string>
using namespace std;

class Journal
{
    private:
        string journalID;
        string title;
        string publisher;
        string category;
        string publicationDate;
        int volume;
        int issueNumber;
        int publicationYear;

    public:

    Journal()
    {
        journalID = "";
        title = "";
        publisher = "";
        category = "";
        publicationDate = "";
        volume = 1;
        issueNumber = 1;
        publicationYear = 2024;
    }
   
    void setJournalId(string id) { journalID =id; }
    void setTitle(string t) { title =t; }
    void setPublisher(string p) { author =p; }
    void setCategory(string cat) { category =cat; }
    void setPublicationDate(string date) { publicationDate = date; }
    void setVolume(int vol) { volume=vol; }
    void setIssueNumber(int issue) { issueNumber =issue; }
    void setPublicationYear(int year) { publicationYear = year; }

    string getjournalId() { return journalId; }
    string getTitle() { return title; }
    string getPublisher() { return publisher; }
    string getCategory() { return category; }
    int getVolume() { return volume; }
    int getissueNumber() { return issueNumber; }
    int getPublicationYear() { return publicationYear; }


    void displayJournal()
    {
        cout << "\n========================================\n";
        cout << "\n          JOURNAL DETAILS               ";
        cout << "\n========================================\n";
        
        cout << "\nJournal ID: " << journalID ;
        cout << "\nTitle: " << title ;
        cout << "\nPublisher: " << publisher ;
        cout << "\nCategory: " << category ;
        cout << "\nPublicationDate: " << publicationDate ;
        cout << "\nVolume: " << volume ;
        cout << "\nIssue Number: " << issueNumber ;
        cout << "\nPublicationyear: " << publicationYear ;
        cout << "\n========================================\n";
    }
};
#endif

