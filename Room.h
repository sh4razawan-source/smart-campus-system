#ifndef ROOM_H
#define ROOM_H

#include<iostream>
#include<string>
using namespace std;

class Room
{
    private:

    int roomNumber;
    int floatnumber;
    int capacity;
    int occupiedBeds;
    string roomtype;

    public:

    Room()
    {
        roomNumber = 0;
        floatNumber = 0;
        capacity = 4;
        occupiedBeds = 0;
        roomType = " Shared "'
    }

    void setRoomNumber(int rNum) { roomNumber = rNum; }
    void setFloatNumber(int fNum) { floatnumber = fNum; }
    void setCapacity(int cap) { capacity = cap; }
    void setOccupiedBeds(int beds) { occupiedBeds = beds; }
    void setRoomType(string type) { roomtype = type; }

    int getRoomNumber() { return roomNumber; }
    int getFloatNumber() { return floatnumber; }
    int getCapacity() { return capacity; }
    int getOccupiedBeds() { return occupiedBeds; }
    string getRoomType() { return roomtype; }
};

   void allocatedBed()
   {
        occupiedBeds++;
        
        cout << "\n========================================\n";
        cout << "\n     BED ALLOCATED SUCCESSFULLY        \n";
        cout << "\n========================================\n";
    }
    else
    {
       cout << "\n========================================\n";
        cout << "\n         ROOM CAPACITY FULL            \n";
        cout << "\n========================================\n";
    }
    }

    void
#endif


