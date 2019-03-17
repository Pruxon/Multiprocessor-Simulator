#ifndef CLASS_H_INCLUDED
#define CLASS_H_INCLUDED

#include <iostream>
#include <sstream>
#include <string>
#include <cmath>
#include "Functions.h"

using namespace std;


class Processor
{
public:
    int time_to_do();
    int actual_clock();
    int get_actual();
};

class Math_Processor: public virtual Processor
{
    int number;
    int time_needed;
    int clock;
public:
    Math_Processor(){};
    Math_Processor(int c, int n);
    ~Math_Processor(){};

    int time_to_do();
    int get_clock();
    int get_actual();
    int get_number();

    float add (float first, float second);
    float subtract (float first, float second);
    float divide (float first, float second);
    float multiply (float first, float second);

};

class Advanced_Math_Processor: public Math_Processor
{
    int number;
    int time_needed;
    int clock;
public:
    Advanced_Math_Processor(int c,int n);
    ~Advanced_Math_Processor(){};

    int time_to_do();
    int get_clock();
    int get_actual();
    int get_number();

    float exponent(float base, float exponent);
    float pitagoras (float a, float b);
};

class Text_Processor: public virtual Processor
{
    int number;
    int time_needed;
    int clock;
public:
    Text_Processor(int c, int n);
    ~Text_Processor(){};

    int time_to_do();
    int get_clock();
    int get_actual();
    int get_number();

    int how_many(string word, char letter);
    string delete_letter(string word, char letter);
};

#endif // CLASS_H_INCLUDED
