#ifndef ENROLLMENT_H
#define ENROLLMENT_H

#include<iostream>
#include<string>
using namespace std;

class Enrollment
{
    private:

        string enrollmentID;
        string studentRollNo;
        string courseCode;
        string enrollmentDate;
        string grade;
        string status;

    public:
    S
        Enrollment()
        {
            enrollmentID = "";
            studentRollNo = "";
            courseCode = "";
            enrollmentDate = "";
            grade = "Active";
            status = "N/A";
        }

        void setenrollmentID(string id) { enrollmentID = id; }
        void setstudentRollNo(string rollNo) { studentRollNo = rollNo; }
        void setcourseCode(string code) { courseCode = code; }
        void setenrollmentDate(string date) { enrollmentDate = date; }
        void setgrade(string g) { grade = g; }
        void setstatus(string s) { status = s; }

        string getenrollmentID() { return enrollmentID; }
        string getstudentRollNo() { return studentRollNo; }
        string getcourseCode() { return courseCode; }
        string getenrollmentDate() { return enrollmentDate; }
        string getgrade() { return grade; }
        string getstatus() { return status; }

        void enrollStudent()
        {
            cout << "\n========================================\n";
            cout << "\n STUDENT ENROLLED SUCCESSFULLY!\n";
            cout << "\n========================================\n";
        }

        void withdrawCourse()
        {
            status = "Withdrawn";
            cout << "\n========================================\n";
            cout << "\n STUDENT WITHDRAWN SUCCESSFULLY!\n";
            cout << "\n========================================\n";
        }

        void assignGrade(string g)
        {
            grade = g;
            cout << "\n========================================\n";
            cout << "\n GRADE ASSIGNED SUCCESSFULLY!\n";
            cout << "\n========================================\n";
        }

        void displayEnrollmentInfo()
        {
            cout << "\n=================================" << endl;
            cout << "\n        ENROLLMENT DETAILS" << endl;
            cout << "\n=================================" << endl;

            cout << "\nEnrollment ID: " << enrollmentID ;
            cout << "\nStudent Roll No: " << studentRollNo ;
            cout << "\nCourse Code: " << courseCode ;
            cout << "\nEnrollment Date: " << enrollmentDate ;
            cout << "\nGrade: " << grade ;
            cout << "\nStatus: " << status ;
            
            cout << "\n=================================" << endl;
        }
};
#endif
