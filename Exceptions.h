#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

#include <exception>

class CapacityExceededException
    : public std::exception
{
public:
    const char* what() const noexcept override
    {
        return "Course Capacity Exceeded";
    }
};

#endif