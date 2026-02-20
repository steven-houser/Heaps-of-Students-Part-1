#ifndef STUDENT_H_EXISTS
#define STUDENT_H_EXISTS

#include <string>
#include "date.h"
#include "address.h"

class Student {
private:
    std::string first;
    std::string last;
    Address address;
    Date birthDate;
    Date gradDate;
    int credits;

public:
    Student();
    ~Student();
    void init(std::string csvLine);
    void printStudent();
    std::string getLastFirst();
};

#endif
