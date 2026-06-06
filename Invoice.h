#ifndef INVOICE_H
#define INVOICE_H

#include<iostream>
#include<string>
using namespace std;

class Invoice
{
    private:

    int invoiceNumber;
    string issueDate;
    string dueDate;
    string paymentStatus;
    double amount;

    public:
  
    Invoice()
    {
        invoiceNumber = 0;
        issueDate = "";
        dueDate = "";
        paymentStatus = "Pending";
        amount = 0.0;
    }

    void setInvoiceNumber(int num) { invoiceNumber = num;}
    void setIssueDate(string issue) { issueDate = issue;}
    void setDueDate(string due) { dueDate = due;}
    void setPaymentStatus(string status) { paymentStatus = status;}
    void setAmount(double amt) { amount = amt;}

    int getInvoiceNumber() { return invoiceNumber; }
    string getIssueDate() { return issueDate; }
    string getDueDate() { return dueDate; }
    string getPaymentStatus()  { return paymentStatus; }
    double getAmount()  { return amount; }

    void generateInvoice()
    {
        cout << "\n========================================\n";
        cout << "\n     INVOICE GENERATED SUCCESSFULLY     \n";
        cout << "\n========================================\n";
    }

    void markPaid()
    {
        paymentStatus = "Paid";
        cout << "\n========================================\n";s
        cout << "\n       INVOICE MARKED AS PAID           \n";
        cout << "\n========================================\n";
    }

    void displayInvoice()
    {
        cout << "\n========================================\n";
        cout << "\n           INVOICE DETAILS              \n";
        cout << "\n========================================\n";
        cout << "\nInvoice Number : " << invoiceNumber;
        cout << "\nIssue Date     : " << issueDate;
        cout << "\nDue Date       : " << dueDate;
        cout << "\nPayment Status : " << paymentStatus;
        cout << "\nAmount         : " << amount;
        cout << "\n========================================\n";
    }
};
#endif