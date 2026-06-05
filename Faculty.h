#ifndef FACULTY_H
#define FACULTY_H

#include "Person.h"
using namespace std;

class Faculty : public Person
{
    private:
        string employeeID;
        string department;
        string designation;
        string specialization;
        double salary;
        int experience;

    public:

        Faculty()
        {
            employeeID = "";
            department = "";
            designation = "";
            specialization = "";
            salary = 0.0;
            experience = 0;
        }
        void setemployeeID(string id) { employeeID = id; }
        void setdepartment(string dept) { department = dept; }
        void setdesignation(string des) { designation = des; }
        void setspecialization(string s) { specialization = s; }
        void setsalary(double sal) { salary = sal; }
        void setexperience(int exp) { experience = exp; }

        string getemployeeID() { return employeeID; }
        string getdepartment() { return department; }
        string getdesignation() { return designation; }
        string getspecialization() { return specialization; }
        double getsalary() { return salary; }
        int getexperience() { return experience; }\

        void assignCourse()
        {
            cout << "\n========================================\n";
            cout << "\n COURSE ASSIGNED SUCCESSFULLY!\n";
            cout << "\n========================================\n";
        }

        void uploadMarks()
        {
            cout << "\n========================================\n";
            cout << "\n MARKS UPLOADED SUCCESSFULLY!\n";
            cout << "\n========================================\n";
        }

        void markAttendance()
        {
            cout << "\n========================================\n";
            cout << "\n ATTENDANCE MARKED SUCCESSFULLY!\n";
            cout << "\n========================================\n";
        }

        voidgenerateResult()
        {
            cout << "\n========================================\n";
            cout << "\n RESULT GENERATED SUCCESSFULLY!\n";
            cout << "\n========================================\n";
        }

        void login() Override
        {
            cout << "\n========================================\n";
            cout << "\n FACULTY LOGIN SUCCESSFUL!\n";
            cout << "\n========================================\n";
        }

        void displayinfo() override
        {
            cout << "\n=================================" << endl;
            cout << "\n        FACULTY DETAILS" << endl;
            cout << "\n=================================" << endl;

            cout << "\nName: " << name ;
            cout << "\nsurname: " << surname << endl;
            cout << "\nCNIC: " << cnic << endl;
            cout << "\nDepartment: " << department << endl;

            cout << "\nEmployee ID: " << employeeID << endl;
            cout << "\nDesignation: " << designation << endl;
            cout << "\nDepartment: " << department << endl;
            cout << "\nSpecialization: " << specialization << endl;
            cout << "\nSalary: " << salary << endl;
            cout << "\nExperience: " << experience << " years" << endl;
            cout << "\n=================================" << endl;
        }
};
#endif