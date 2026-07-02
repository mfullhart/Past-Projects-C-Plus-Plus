//
// Created by MAY-L on 4/22/2025.
//
#include <iostream>
#include <stdexcept> // For std::exception
#include <string>

#include "example.h"

// Bad: Doesn't inherit from std::exception
class MyError { /* ... */ };

// Good: Proper custom exception
// class MyError : public std::exception { /* ... */ };