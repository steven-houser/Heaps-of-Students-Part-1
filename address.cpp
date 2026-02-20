// Name: Steven Houser
// Project: Lab 7 - Heap of Students Part 1
// Date: 02/20/26

#include <iostream>
#include "address.h"

// Default constructor - safe default values
Address::Address() {
    street = "";
    city = "";
    state = "";
    zip = "";
} // end constructor

// Set all address fields
void Address::init(std::string street, std::string city, std::string state, std::string zip) {
    this->street = street;
    this->city = city;
    this->state = state;
    this->zip = zip;
} // end init

// Print address on one line
void Address::printAddress() {
    std::cout << street << ", " << city << ", " << state << " " << zip << std::endl;
} // end printAddress
