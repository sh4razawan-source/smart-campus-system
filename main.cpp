#include <iostream>
#include <string>
#include <limits>
#include <exception>
#include "Utils.h"
#include "Exceptions.h"
#include "Reports.h"
#include "Library.h"
#include "Book.h"
#include "Journal.h"
#include "LibraryCatalog.h"
#include "FeeRecord.h"
#include "Invoice.h"
#include "Room.h"
#include "HostelManager.h"
#include "Student.h"
#include "Faculty.h"
using namespace std; 

class Person {
protected:
    string name;
public:
    Person(string n) : name(n) {}
    virtual void displayRole() = 0;  Polymorphism
    virtual ~Person() {}
};

class Student : public Person {
public:
    Student(string n) : Person(n) {}
    void displayRole() override {
        cout << "\nRole: Student | Name: " << name;
    }
};

class Faculty : public Person {
public:
    Faculty(string n) : Person(n) {}
    void displayRole() override {
        cout << "\nRole: Faculty | Name: " << name;
    }
}; 
int getValidatedChoice() {
    int choice;
    if (!(cin >> choice)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        throw InvalidDataException();
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear newline buffer
    return choice;
}

int main() {
    Library centralLibrary;
    Book dynamicBook;
    Journal dynamicJournal;
    LibraryCatalog catalog;
    FeeRecord fee;
    Invoice invoice;
    Room room;
    HostelManager hostel;
    Reports campusReports;
    dynamicBook.setTitle("Object-Oriented Programming C++");
    dynamicBook.setIsbn("978-3-16-148410-0");
    dynamicBook.setCopies(2); // Modest copies for exception test

    dynamicJournal.setTitle("IEEE Software Engineering Journal");
    dynamicJournal.setJournalID("J-101");

    fee.setStudentRollNo("25-CS-227");
    fee.setTuitionFee(85000.0);
    fee.setExamFee(5000.0);
    const int maxPeople = 2;
    Person* campusPeople[maxPeople];
     campusPeople[0] = new Student("Talha");
    campusPeople[1] = new Faculty("Dr. Kamran");

    int mainChoice = 0;

    while (true) {
        Utils::clearScreen();
        Utils::welcomeMessage();
        
        cout << "1. Student & Faculty Management (Polymorphism)\n";
        cout << "2. Library Management Module\n";
        cout << "3. Fee & Finance Management Module\n";
        cout << "4. Hostel Management Module\n";
        cout << "5. Campus Reports Dashboard\n";
        cout << "6. Exit System\n";
        Utils::line();
        cout << "\nEnter your choice (1-6): ";

        try {
            mainChoice = getValidatedChoice();

            if (mainChoice == 6) {
                Utils::clearScreen();
                Utils::goodbyeMessage();
                break;
            }

            switch (mainChoice) {
                case 1: { 
                    Utils::clearScreen();
                    Utils::heading("CAMPUS USERS (POLYMORPHISM)");
                    for (int i = 0; i < maxPeople; i++) {
                        campusPeople[i]->displayRole();
                    }
                    cout << "\n";
                    Utils::line();
                    cout << "\n";
                    Utils::pauseScreen();
                    break;
                }
                case 2: { // Library Sub-Menu
                    int libChoice = 0;
                    while (true) {
                        Utils::clearScreen();
                        Utils::heading("LIBRARY MANAGEMENT");
                        cout << "1. Display Library Stats\n";
                        cout << "2. View Catalog Summary\n";
                        cout << "3. Search Item in Catalog\n";
                        cout << "4. View Current Book Details\n";
                        cout << "5. Issue Book (Exception Risk)\n";
                        cout << "6. Return Book\n";
                        cout << "7. Back to Main Menu\n";
                        Utils::line();
                        cout << "\nEnter choice: ";
                        
                        libChoice = getValidatedChoice();
                        if (libChoice == 7) break;

                        if (libChoice == 1) centralLibrary.displayLibrary();
                        else if (libChoice == 2) {
                            catalog.setTotalBooksInCatalog(centralLibrary.getTotalBooks());
                            catalog.setTotalJournalsInCatalog(centralLibrary.getTotalJournals());
                            catalog.displayCatalog();
                        }
                        else if (libChoice == 3) {
                            string title;
                            cout << "Enter Book/Journal Title to Search: ";
                            getline(cin, title);
                            catalog.searchItem(title);
                        }
                        else if (libChoice == 4) dynamicBook.displayBook();
                        else if (libChoice == 5) {
                            if (dynamicBook.getCopies() <= 0) {
                                throw BookNotAvailableException();
                            }
                            dynamicBook.issueBook();
                            centralLibrary.issueBook();
                        }
                        else if (libChoice == 6) {
                            dynamicBook.returnBook();
                            centralLibrary.returnBook();
                        }
                        Utils::pauseScreen();
                    }
                    break;
                }
                case 3: { // Fee Sub-Menu
                    int feeChoice = 0;
                    while (true) {
                        Utils::clearScreen();
                        Utils::heading("FEE & FINANCE SYSTEM");
                        cout << "1. Display Fee Structure\n";
                        cout << "2. Calculate Total Outstanding Fee\n";
                        cout << "3. Generate Invoice\n";
                        cout << "4. Pay Student Fee\n";
                        cout << "5. Back to Main Menu\n";
                        Utils::line();
                        cout << "\nEnter choice: ";

                        feeChoice = getValidatedChoice();
                        if (feeChoice == 5) break;

                        if (feeChoice == 1) fee.displayFeeRecord();
                        else if (feeChoice == 2) fee.calculateTotalFee();
                        else if (feeChoice == 3) {
                            invoice.setInvoiceNumber(4821);
                            invoice.setAmount(fee.getTotalFee());
                            invoice.setIssueDate("01-06-2026");
                            invoice.setDueDate("15-06-2026");
                            invoice.generateInvoice();
                            invoice.displayInvoice();
                        }
                        else if (feeChoice == 4) {
                            if (fee.getTotalFee() == 0) {
                                cout << "\nPlease calculate outstanding fee first.\n";
                            } else {
                                fee.payFee();
                                invoice.markPaid();
                            }
                        }
                        Utils::pauseScreen();
                    }
                    break;
                }
                case 4: { // Hostel Sub-Menu
                    int hostelChoice = 0;
                    while (true) {
                        Utils::clearScreen();
                        Utils::heading("HOSTEL MANAGEMENT");
                        cout << "1. View Hostel General Status\n";
                        cout << "2. Assign/Update Manager\n";
                        cout << "3. View Current Room Capacity\n";
                        cout << "4. Allocate Bed (Exception Risk)\n";
                        cout << "5. Vacate Bed\n";
                        cout << "6. Back to Main Menu\n";
                        Utils::line();
                        cout << "\nEnter choice: ";

                        hostelChoice = getValidatedChoice();
                        if (hostelChoice == 6) break;

                        if (hostelChoice == 1) hostel.displayHostelStatus();
                        else if (hostelChoice == 2) {
                            string name;
                            cout << "Enter Manager Name: ";
                            getline(cin, name);
                            hostel.updateManager(name);
                            hostel.setManagerID("MNG-786");
                            hostel.showManager();
                        }
                        else if (hostelChoice == 3) {
                            room.setRoomNumber(214);
                            room.setFloorNumber(2);
                            room.displayRoom();
                        }
                        else if (hostelChoice == 4) {
                            if (room.getOccupiedBeds() >= room.getCapacity()) {
                                throw RoomUnavailableException();
                            }
                            room.allocateBed();
                            hostel.allocateRoom();
                        }
                        else if (hostelChoice == 5) {
                            room.vacateBed();
                            hostel.vacateRoom();
                        }
                        Utils::pauseScreen();
                    }
                    break;
                }
                case 5: { // Reports Dashboard
                    Utils::clearScreen();
                    Utils::heading("CAMPUS ADMINISTRATION REPORTS");
                    campusReports.generateStudentReport();
                    campusReports.generateFacultyReport();
                    campusReports.generateLibraryReport();
                    campusReports.generateCampusSummary();
                    Utils::pauseScreen();
                    break;
                }
                default: {
                    cout << "\nInvalid Menu Option! Please select between 1 and 6.\n";
                    Utils::pauseScreen();
                }
            }
        }
        // Exception Handling Catch Blocks
        catch (const BookNotAvailableException& e) {
            cout << "\n=======================================";
            cout << "\n " << e.what();
            cout << "\n=======================================\n";
            Utils::pauseScreen();
        }
        catch (const RoomUnavailableException& e) {
            cout << "\n=======================================";
            cout << "\n " << e.what();
            cout << "\n=======================================\n";
            Utils::pauseScreen();
        }
        catch (const InvalidDataException& e) {
            cout << "\n=======================================";
            cout << "\n " << e.what();
            cout << "\n=======================================\n";
            Utils::pauseScreen();
        }
        catch (const exception& e) {
            cout << "\nStandard Exception Caught: " << e.what() << "\n";
            Utils::pauseScreen();
        }
    }
    for (int i = 0; i < maxPeople; i++) {
        delete campusPeople[i];
    }

    return 0;
}