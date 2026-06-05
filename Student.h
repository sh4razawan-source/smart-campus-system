#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
using namespace std;

class Student : public Person
{
    private:
        string rollnumber;
        string department;
        string registrationNo;
        string section;
        int semester;
        intcreditsCompleted;
        float cgpa;
        float attendance;
        float scholarship;

    public:
        Student(
        {
            rollnumber = "",
            registrationNo = "",
            department = "",
            section = "",
            semester = 2,
            creditsCompleted = 0,
            cgpa = 0.0,
            attendance = 0.0,
            scholarship = false
        }

        void setrollnumber(string r) { rollnumber = r; }
        void setregistrationNo(string rn) { registrationNo = rn; }
        void setdepartment(string d) { department = d; }
        void setsection(string s) { section = s; }
        void setsemester(int sem) { semester = sem; }
        void setcreditsCompleted(int cc) { creditsCompleted = cc; }
        void setcgpa(float c) { cgpa = c; }
        void setattendance(float a) { attendance = a; }
        void setscholarship(float s) { scholarship = s; }

        string getrollnumber() { return rollnumber; }
        string getregistrationNo() { return registrationNo; }
        string getdepartment() { return department; }
        string getsection() { return section; }
        int getsemester() { return semester; }
        int getcreditsCompleted() { return creditsCompleted; }
        float getcgpa() { return cgpa; }
        float getattendance() { return attendance; }
        float getscholarship() { return scholarship; }

        void registerCourse()
        {
            cout << "\n========================================\n";
            cout << "\n COURSE REGISTERED SUCCESSFULLY!\n";
            cout << "\n========================================\n";
        }

        void dropCourse()
        {
            cout << "\n========================================\n";
            cout << "\n COURSE DROPPED SUCCESSFULLY!\n";
            cout << "\n========================================\n";
        }

        voidpayFees()
        {
            cout << "\n========================================\n";
            cout << "\n FEES PAID SUCCESSFULLY!\n";
            cout << "\n========================================\n";
        }

        void borrowBook()
        {
            cout << "\n========================================\n";
            cout << "\n BOOK BORROWED SUCCESSFULLY!\n";
            cout << "\n========================================\n";
        }

       void viewTranscript()
        {
            cout << "\n========================================\n";
            cout << "\n TRANSCRIPT VIEWED SUCCESSFULLY!\n";
            cout << "\n========================================\n";
        }

        void login() override
        {
            cout << "\n========================================\n";
            cout << "\n STUDENT LOGGED IN SUCCESSFULLY!\n";
            cout << "\n========================================\n";
        }
        
        void displayinfo() override
        {
            cout << "\n=================================" << endl;
            cout << "\n        STUDENT DETAILS" << endl;
            cout << "\n=================================" << endl;

            cout << "\nName: " << name ;
            cout << "\nSurname: " << surname ;
            cout << "\nCNIC: " << cnic ;
            cout << "\nContact Number: " << contactnumber ;
            
            cout << "\nRoll Number: " << rollnumber ;
            cout << "\nRegistration Number: " << registrationNo ;
            cout << "\nDepartment: " << department ;
            cout << "\nSection: " << section ;
            cout << "\nSemester: " << semester ;
            cout << "\nCredits Completed: " << creditsCompleted ;
            cout << "\nCGPA: " << cgpa ;
            cout << "\nAttendance: " << attendance ;
            cout << "\nScholarship: " << scholarship ;
            cout << "\n=================================" << endl;
        }
};

#endif