// Name: Steven Houser
// Project: Lab 7 - Heap of Students Part 1
// Date: 02/20/26

#include <iostream>
#include <sstream>
#include "student.h"

// Default constructor - safe default values
Student::Student() {
    first = "";
    last = "";
    credits = 0;
} // end constructor

// Destructor
Student::~Student() {
} // end destructor

// Parse comma-delimited CSV string into student fields
// Format: first,last,street,city,state,zip,birthdate,graddate,credits
void Student::init(std::string csvLine) {
    std::stringstream ss;
    std::string sCredits;
    std::string street;
    std::string city;
    std::string state;
    std::string zip;
    std::string birthStr;
    std::string gradStr;
    std::stringstream converter;

    // Load CSV line into parsing stream
    ss.str(csvLine);

    // Extract each field using comma delimiter
    getline(ss, first, ',');
    getline(ss, last, ',');
    getline(ss, street, ',');
    getline(ss, city, ',');
    getline(ss, state, ',');
    getline(ss, zip, ',');
    getline(ss, birthStr, ',');
    getline(ss, gradStr, ',');
    getline(ss, sCredits);

    // Initialize address with extracted fields
    address.init(street, city, state, zip);

    // Initialize date objects with extracted strings
    birthDate.init(birthStr);
    gradDate.init(gradStr);

    // Convert credits string to integer
    converter << sCredits;
    converter >> credits;
} // end init

// Print all student data
void Student::printStudent() {
    std::cout << last << ", " << first << std::endl;
    address.printAddress();
    std::cout << "Born: ";
    birthDate.printDate();
    std::cout << "Grad: ";
    gradDate.printDate();
    std::cout << "Credits: " << credits << std::endl;
} // end printStudent

// Return last, first formatted string
std::string Student::getLastFirst() {
    return last + ", " + first;
} // end getLastFirst
