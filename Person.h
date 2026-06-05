#ifndef PERSON-H
#define PERSON-H

#include <iostream>
#include <string>
using namespace std;

class Person
{
    protected:
        string name;
        string surname;
        string cnic;
        string bloodgroup;
        string gender; 
        string dateofbirth;
        strig address;
        string contactnumber;
        string city;
        string country;

    public:
       person(
            name = "",
            surname = "",
            cnic = "",
            bloodgroup = "",
            gender = "",
            dateofbirth = "",
            address = "",
            contactnumber = "",
            city = "",
            country = ""
        );

    person(string n, string s, string c, string bg, string g, string 
           dob,string a, string cn, string ci, string co, int a )
    {
        name = n;
        surname = s;
        cnic = c;
        bloodgroup = bg;
        gender = g;
        dateofbirth = dob;
        address = a;
        contactnumber = cn;
        city = ci;
        country = co;
    }
 
    voidsetname(string n) { name = n; }
    void setsurname(string s) { surname = s; }
    void setcnic(string c) { cnic = c; }
    void setbloodgroup(string bg) { bloodgroup = bg; }
    void setgender(string g) { gender = g; }
    void setdateofbirth(string dob) { dateofbirth = dob; }
    void setaddress(string a) { address = a; }
    void setcontactnumber(string cn) { contactnumber = cn; }
    void setcity(string ci) { city = ci; }
    void setcountry(string co) { country = co; }

    string getname() { return name; }
    string getsurname() { return surname; }
    string getcnic() { return cnic; }
    string getbloodgroup() { return bloodgroup; }
    string getgender() { return gender; }
    string getdateofbirth() { return dateofbirth; }
    string getaddress() { return address; }
    string getcontactnumber() { return contactnumber; }
    string getcity() { return city; }
    string getcountry() { return country; }

    virtual void displayinfo()
    {
        cout << "\n=================================" << endl;
        cout << "\n        PERSON INFO" << endl;
        cout << "\n=================================" << endl;
        cout << \nName: " << name << " " << surname << endl;
        cout << "CNIC: " << cnic << endl;
        cout << "Blood Group: " << bloodgroup << endl;
        cout << "Gender: " << gender << endl;
        cout << "Date of Birth: " << dateofbirth << endl;
        cout << "Address: " << address << endl;
        cout << "Contact Number: " << contactnumber << endl;
        cout << "City: " << city << endl;
        cout << "Country: " << country << endl;
        cout << "\n=================================" << endl;
    }
        virtual void login () = 0 ;

        virtual void logout () ;
    {
        cout << "\n================================" << endl;}
        cout << "\n     USER LOGGED OUT" << endl;
        cout << "\n================================" << endl;
    }
        virtual ~Person() {}
        {
        }
};