#ifndef FEERECORD_H
#define FEERECORD_H

#include<iostream>
using namespace std;

class FeeRecord
{
    private:
       string studentRollNo;
       double tutionFee;
       double hostelFee;
       double transportFee;
       double libraryFee;
      double examFee;
       double totalFee;

    public:

    FeeRecord()
    {
       studentRollNo = "";
       tutionFee = 0.0;
       hostelFee = 0.0;
       transportFee = 0.0;
       libraryFee = 0.0;
       examFee = 0.0;
       totalFee = 0.0;
    }
    
      void setStudentRollNo(string roll) { studentRollNo = roll; } 
      void setTutionFee(double tf) { tutionFee = tf; }
      void setHostelFee(double hf) { hostelFee = hf; }
      void setTransportFee(double trf) { transportFee = trf; }
      void setLibraryFee(double lf) { libraryFee = lf; }
      void setExamFee(double ef) { examFee = ef; }
      void setTotalFee(double tot) { totalFee = tot; }

      string getStudentRollNo() { return studentRollNo; }
      double getTutionFee() { return tutionFee; }
      double getHostelFee() { return hostelFee; }
      double getTransportFee() { return transportFee; }
      double getLibraryFee() { return libraryFee; }
      double getExamFee() { return examFee; }
      double getTotalFee() { return totalFee; }
                

    
   
    void calculateTotalFee()
    {
        totalFee = tutionFee + hostelFee + transportFee + libraryFee + examFee;
         cout << "\n========================================\n";
        cout << "\n        FEE CALCULATED SUCCESSFULLY       ";
        cout << "\n========================================\n";
    }

      void payFee()
      {
        cout << "\n========================================\n";
        cout << "\n        FEE PAID SUCCESSFULLY       ";
        cout << "\n========================================\n";
      }

      void displayFeeRecord()
      {
      }
        cout << "\n========================================\n";
        cout << "\n        FEE RECORD DETAILS       \n";
        cout << "\n========================================\n";
        cout << "\nStudent Roll No : " << studentRollNo;
        cout << "\nTution Fee      : " << tutionFee;
        cout << "\nHostel Fee      : " << hostelFee;
        cout << "\nTransport Fee   : " << transportFee;
        cout << "\nLibrary Fee     : " << libraryFee;
        cout << "\nExam Fee        : " << examFee;
        cout << "\n----------------------------------------\n";
        cout << "\nTotal Fee       : " << totalFee;
        cout << "\n========================================\n";
      }

};
#endif

