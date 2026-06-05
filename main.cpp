#include <iostream>
using namespace std;

// Person Module
#include "Person.h"
#include "Student.h"
#include "Faculty.h"
#include "Staff.h"

// Course Module
#include "Course.h"
#include "Enrollment.h"

// Library Module
#include "Library.h"
#include "Book.h"
#include "Journal.h"

// Finance Module
#include "FeeRecord.h"
#include "Invoice.h"

// Hostel Module
#include "Room.h"
#include "HostelManager.h"

// Utility Module
#include "Reports.h"
#include "Utils.h"
#include "Exceptions.h"

int main()
{
    int choice;

    do
    {
        cout << "\n====================================";
        cout << "\n SMART CAMPUS MANAGEMENT SYSTEM";
        cout << "\n====================================";
        cout << "\n1. Student Module";
        cout << "\n2. Faculty Module";
        cout << "\n3. Staff Module";
        cout << "\n4. Course Module";
        cout << "\n5. Library Module";
        cout << "\n6. Finance Module";
        cout << "\n7. Hostel Module";
        cout << "\n8. Reports";
        cout << "\n9. Exit";
        cout << "\n\nEnter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            {
                Student s1(
                    "Ali Raza",
                    20,
                    "23-CS-101",
                    3.75
                );

                s1.displayInfo();
                break;
            }

            case 2:
            {
                Faculty f1(
                    "Dr Ahmed",
                    45,
                    "Computer Science"
                );

                f1.displayInfo();
                break;
            }

            case 3:
            {
                Staff st1(
                    "Usman Khan",
                    35,
                    "Lab Assistant"
                );

                st1.displayInfo();
                break;
            }

            case 4:
            {
                Course c1(
                    "CS104",
                    "Object Oriented Programming"
                );

                Enrollment e1(
                    "23-CS-101",
                    "CS104"
                );

                c1.displayCourse();
                e1.showEnrollment();

                break;
            }

            case 5:
            {
                Library lib;

                Book b1(
                    "C++ Programming",
                    "Bjarne Stroustrup"
                );

                Journal j1(
                    "IEEE Computer Society"
                );

                lib.showLibrary();

                cout << "\nBook: "
                     << b1.title
                     << endl;

                cout << "Author: "
                     << b1.author
                     << endl;

                cout << "Journal: "
                     << j1.title
                     << endl;

                break;
            }

            case 6:
            {
                FeeRecord fee(50000);

                fee.displayFee();

                Invoice invoice(1001);

                cout << "\nInvoice Generated"
                     << endl;

                break;
            }

            case 7:
            {
                Room room1(101);

                HostelManager hostel;

                hostel.allocateRoom();

                break;
            }

            case 8:
            {
                Reports report;

                report.generateReport();

                break;
            }

            case 9:
            {
                cout << "\nThank You!" << endl;
                break;
            }

            default:
            {
                cout << "\nInvalid Choice!" << endl;
            }
        }

    } while(choice != 9);

    return 0;
}