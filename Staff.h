#ifndef STAFF_H
#define STAFF_H

#include "person.h"
using namespace std;

class stuff : public person
{
    
    private:
        string staffID;
        string department;
        string designation;
        string shift;
        double salary;

    public:
        stuff()
        {
            staffID = "";
            department = "";
            designation = "";
            shift = "";
            salary = 0.0;
        }

        void setstaffID(string id) { staffID = id; }
        void setdepartment(string dept) { department = dept; }
        void setdesignation(string des) { designation = des; }
        void setshift(string s) { shift = s; }
        void setsalary(double sal) { salary = sal; }

        string getstaffID() { return staffID; }
        string getdepartment() { return department; }
        string getdesignation() { return designation; }
        string getshift() { return shift; }
        double getsalary() { return salary; }

        void manageResources()
        {
            cout << "\n========================================\n";
            cout << "\n RESOURCES MANAGED SUCCESSFULLY!\n";
            cout << "\n========================================\n";
        }

        void issueDocuments()
        {
            cout << "\n========================================\n";
            cout << "\n DOCUMENTS ISSUED SUCCESSFULLY!\n";
            cout << "\n========================================\n";
        }

        void updateRecords()
        {
            cout << "\n========================================\n";
            cout << "\n RECORDS UPDATED SUCCESSFULLY!\n";
            cout << "\n========================================\n";
        }

        void login() override
        {
            cout << "\n========================================\n";
            cout << "\n STAFF LOGGED IN SUCCESSFULLY!\n";
            cout << "\n========================================\n";
        }

        void logout() override
        {
            cout << "\n========================================\n";
            cout << "\n STAFF LOGGED OUT SUCCESSFULLY!\n";
            cout << "\n========================================\n";
        }

        void displayinfo() override
        {
            cout << "\n=================================" << endl;
            cout << "\n        STAFF DETAILS      " << endl;
            cout << "\n=================================" << endl;

            cout << "\nName: " << name;
            cout << "\nSurname: " << surname;
            cout << "\nCNIC: " << cnic;
            cout << "\nContact Number: " << contactnumber;

            cout << "\nStaff ID: " << staffID;
            cout << "\nDepartment: " << department;
            cout << "\nDesignation: " << designation;
            cout << "\nShift: " << shift;
            cout << "\nSalary: " << salary;
            cout << "\n=================================" << endl;
        }
};
#endif