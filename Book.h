#ifndef BOOK_H 
#define BOOK_H

#include <iostream<
#include <string>
using namespace std;

class Book
{
    
private:
   string isbn;
   string title;
   string author;
   string publisher;
   string category;
   int edition;
   int copies;

   public:

    Book()
    {
       isbn = "";
       title = "";
       author = "";
       publisher = "";
       category = "";
       edition = 1;
       copies = 1;
    }

    void setisbn(string i) { isbn =i; }
    void settitle(string t) { title =t; }
    void setauthor(string a) { author =a; }
    void setpublisher(string p) { publisher =p; }
    void setcategory(string cat) { category =cat; }
    void setedition(int ed) { edition =ed; }
    void setcopies(int co) { copies =co; }

    string getisbn() { return isbn; }
    string gettitle() { return title; }
    string getauthor() { return author; }
    string getpublisher() { return publisher; }
    string getcategory() { return category; }
    int getedition() { return edition; }
    int getcopies() { return copies; }

    void issueBook()
    {
        if (copies > 0)
        {
            copies--;
            cout << "\n========================================\n";
            cout << "\n BOOK ISSUED SUCCESSFULLY!\n";
            cout << "\n========================================\n";
        }
        else
        {
            cout << "\n========================================\n";
            cout << "\n NO COPIES AVAILABLE TO ISSUE!\n";
            cout << "\n========================================\n";
        }
    }

    void displayBookInfo()
    {
        cout << "\n=========================================\n";
        cout << "\n====== BOOK INFORMATION ======\n";
        cout << "\n=========================================\n";
        
        cout << "\nISBN: " << isbn << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Publisher: " << publisher << endl;
        cout << "Category: " << category << endl;
        cout << "Edition: " << edition << endl;
        cout << "Copies Available: " << copies << endl;
        cout << "\n=========================================\n";
    }
};
#endif