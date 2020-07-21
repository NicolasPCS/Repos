#pragma once
#include <exception>
using namespace std;

class GestionExcepciones : public exception {
public:
    virtual const char* what() const throw();
    virtual const char* what1() const throw();
};
