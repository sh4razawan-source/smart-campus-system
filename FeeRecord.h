#ifndef FEERECORD_H
#define FEERECORD_H

#include <iostream>
using namespace std;

class FeeRecord
{
private:
    double totalFee;

public:
    FeeRecord(double fee=0)
    {
        totalFee = fee;
    }

    void displayFee()
    {
        cout << "\nTotal Fee: "
             << totalFee << endl;
    }
};

#endif