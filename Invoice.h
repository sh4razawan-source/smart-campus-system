#ifndef INVOICE_H
#define INVOICE_H

class Invoice
{
private:
    int invoiceID;

public:
    Invoice(int id=0)
    {
        invoiceID = id;
    }
};

#endif