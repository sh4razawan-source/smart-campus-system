#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

#include <iostream>
#include <exception>

using namespace std;
class CapacityExceededException : public exception
{
public:
    const char* what() const noexcept override
    {
        return "ERROR: Course Capacity Exceeded!";
    }
};
class BookNotAvailableException : public exception
{
public:
    const char* what() const noexcept override
    {
        return "ERROR: Book Is Out Of Stock / Not Available!";
    }
};
class FeeNotPaidException : public exception
{
public:
    const char* what() const noexcept override
    {
        return "ERROR: Action Denied! Outstanding Fees Not Paid.";
    }
};
class RoomUnavailableException : public exception
{
public:
    const char* what() const noexcept override
    {
        return "ERROR: Hostel Room Is Fully Occupied!";
    }
};
class InvalidDataException : public exception
{
public:
    const char* what() const noexcept override
    {
        return "ERROR: Invalid Input Or Data Format Entered!";
    }
};

#endif