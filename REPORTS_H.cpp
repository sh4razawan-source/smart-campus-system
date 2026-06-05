#ifndef REPORTS_H
#define REPORTS_H

#include <iostream>
#include <string>

using namespace std;

class Reports
{
public:
    void generateStudentReport()
    {
        cout << "\n=======================================";
        cout << "\n      GENERATING STUDENT REPORT...     ";
        cout << "\n=======================================\n";
    }

    void generateFacultyReport()
    {
        cout << "\n=======================================";
        cout << "\n      GENERATING FACULTY REPORT...     ";
        cout << "\n=======================================\n";
    }

    void generateLibraryReport()
    {
        cout << "\n=======================================";
        cout << "\n      GENERATING LIBRARY REPORT...     ";
        cout << "\n=======================================\n";
    }

    void generateFeeReport()
    {
        cout << "\n=======================================";
        cout << "\n        GENERATING FEE REPORT...       ";
        cout << "\n=======================================\n";
    }

    void generateHostelReport()
    {
        cout << "\n=======================================";
        cout << "\n      GENERATING HOSTEL REPORT...      ";
        cout << "\n=======================================\n";
    }

    void generateAttendanceReport()
    {
        cout << "\n=======================================";
        cout << "\n    GENERATING ATTENDANCE REPORT...    ";
        cout << "\n=======================================\n";
    }

    void generateResultReport()
    {
        cout << "\n=======================================";
        cout << "\n      GENERATING RESULT REPORT...      ";
        cout << "\n=======================================\n";
    }
    void generateCampusSummary()
    {
        cout << "\n=======================================";
        cout << "\n            CAMPUS SUMMARY             ";
        cout << "\n=======================================";
        cout << "\nStudent Status:    [ ONLINE / READY ]  ";
        cout << "\nFaculty Status:    [ ONLINE / READY ]  ";
        cout << "\nLibrary Status:    [ ONLINE / READY ]  ";
        cout << "\nFee Status:        [ ONLINE / READY ]  ";
        cout << "\nHostel Status:     [ ONLINE / READY ]  ";
        cout << "\n=======================================\n";
    }
};

#endif