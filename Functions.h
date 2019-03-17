#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#include "Help.h"

using namespace std;

float String_to_float(string nps);
string Float_to_string (float number);

void fillVector(vector <Result>&);
void printVector (vector <Result>&);

void fillVector_arg(vector <Task>&);
void printVector_arg (vector <Task>&);
#endif // FUNCTIONS_H_INCLUDED
