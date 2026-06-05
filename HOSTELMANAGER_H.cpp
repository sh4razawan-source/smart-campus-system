#ifndef HOSTELMANAGER_H
#define HOSTELMANAGER_H

#include <iostream>
#include <string>

using namespace std;

class HostelManager
{
private:
    string hostelName;
    string managerName;
    string managerID;
    int totalRooms;
    int availableRooms;
    int occupiedRooms;

public:
    HostelManager()
    {
        hostelName = "SCMS Boys Hostel";
        managerName = "";
        managerID = "";
        totalRooms = 100;
        availableRooms = 100;
        occupiedRooms = 0;
    }
    void setHostelName(string hName) { hostelName = hName; }
    void setManagerName(string mName) { managerName = mName; }
    void setManagerID(string mID) { managerID = mID; }
    void setTotalRooms(int total) { totalRooms = total; }
    void setAvailableRooms(int avail) { availableRooms = avail; }
    void setOccupiedRooms(int occ) { occupiedRooms = occ; }
    string getHostelName() { return hostelName; }
    string getManagerName() { return managerName; }
    string getManagerID() { return managerID; }
    int getTotalRooms() { return totalRooms; }
    int getAvailableRooms() { return availableRooms; }
    int getOccupiedRooms() { return occupiedRooms; }
    void allocateRoom()
    {
        if (availableRooms > 0)
        {
            availableRooms--;
            occupiedRooms++;
            cout << "\n=======================================";
            cout << "\n         ROOM ALLOCATED SUCCESSFULLY   ";
            cout << "\n=======================================\n";
        }
        else
        {
            cout << "\n=======================================";
            cout << "\n          NO ROOMS AVAILABLE           ";
            cout << "\n=======================================\n";
        }
    }

    void vacateRoom()
    {
        if (occupiedRooms > 0)
        {
            occupiedRooms--;
            availableRooms++;
            cout << "\n=======================================";
            cout << "\n          ROOM VACATED SUCCESSFULLY    ";
            cout << "\n=======================================\n";
        }
        else
        {
            cout << "\n=======================================";
            cout << "\n        HOSTEL IS ALREADY EMPTY        ";
            cout << "\n=======================================\n";
        }
    }

    // Display Hostel Status - Proper Spacing aur Menu Borders ke sath
    void displayHostelStatus()
    {
        cout << "\n=======================================";
        cout << "\n            HOSTEL STATUS              ";
        cout << "\n=======================================";
        cout << "\nHostel Name:     " << hostelName;
        cout << "\nManager Name:    " << (managerName == "" ? "Not Assigned" : managerName);
        cout << "\nManager ID:      " << (managerID == "" ? "N/A" : managerID);
        cout << "\nTotal Rooms:     " << totalRooms;
        cout << "\nAvailable Rooms: " << availableRooms;
        cout << "\nOccupied Rooms:  " << occupiedRooms;
        cout << "\n=======================================\n";
    }

    // Manager Details Function
    void showManager()
    {
        cout << "\n=======================================";
        cout << "\n           MANAGER DETAILS             ";
        cout << "\n=======================================";
        cout << "\nManager Name:    " << (managerName == "" ? "Not Assigned" : managerName);
        cout << "\nManager ID:      " << (managerID == "" ? "N/A" : managerID);
        cout << "\n=======================================\n";
    }
};

#endif