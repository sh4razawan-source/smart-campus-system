#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>
using namespace std;

class Course
{
    private:
        string courseCode;
        string courseTitle;
        string department;
        string instructor;
        int creditHours;
        int enrolledStudents;
        int maxStudents;

    public:
        Course()
        {
            courseCode = "";
            courseTitle = "";
            department = "";
            instructor = "";
            creditHours = 0;
            enrolledStudents = 0;
            maxStudents = 50;
        }

        void setcourseCode(string code) { courseCode = code; }
        void setcourseTitle(string title) { courseTitle = title; }
        void setdepartment(string dept) { department = dept; }
        void setinstructor(string instr) { instructor = instr; }
        void setcreditHours(int credits) { creditHours = credits; }
        void setenrolledStudents(int enrolled) { enrolledStudents = enrolled; }

        string getcourseCode() { return courseCode; }
        string getcourseTitle() { return courseTitle; }
        string getdepartment() { return department; }
        string getinstructor() { return instructor; }
        int getcreditHours() { return creditHours; }
        int getenrolledStudents() { return enrolledStudents; }
        int getmaxStudents() { return maxStudents; }

        void addStudent()
        {
            if (enrolledStudents < maxStudents)
            {
                enrolledStudents++;
                cout << "\n========================================\n";
                cout << "\n STUDENT ADDED TO COURSE SUCCESSFULLY!\n";
                cout << "\n========================================\n";
            }
            else
            {
                cout << "\n========================================\n";
                cout << "\n COURSE IS FULL! CANNOT ADD MORE STUDENTS.\n";
                cout << "\n========================================\n";
            }
        }

        void removeStudent()
        {
            if (enrolledStudents > 0)
            {
                enrolledStudents--;
                cout << "\n========================================\n";
                cout << "\n STUDENT REMOVED FROM COURSE SUCCESSFULLY!\n";
                cout << "\n========================================\n";
            }
            else
            {
                cout << "\n========================================\n";
                cout << "\n NO STUDENTS TO REMOVE FROM COURSE.\n";
                cout << "\n========================================\n";
            }
        }

        void displayCourseInfo()
        {
            cout << "\n=================================" << endl;
            cout << "\n        COURSE DETAILS      " << endl;
            cout << "\n=================================" << endl;

            cout << "\nCourse Code: " << courseCode << endl;
            cout << "Course Title: " << courseTitle<< endl;
            cout << "Department: " << department << endl;
            cout << "Instructor: " << instructor << endl;
            cout << "Credit Hours: " << creditHours << endl;
            cout << "Enrolled Students: " << enrolledStudents << endl;
            cout << "Max Students: " << maxStudents << endl;
            cout << "\n=================================" << endl;
        }
};
#endif

