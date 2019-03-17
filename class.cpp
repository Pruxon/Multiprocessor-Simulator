#include "class.h"
#include "Functions.h"

Math_Processor::Math_Processor(int c, int n)
{
    time_needed=0;
    clock=c;
    number=n;
}

int Math_Processor::time_to_do()
{
    time_needed++;
    time_needed=time_needed%clock;
    return time_needed;
}

int Math_Processor::get_actual()
{
    return time_needed;
}

int Math_Processor::get_clock()
{
    return clock;
}

int Math_Processor::get_number()
{
    return number;
}

float Math_Processor::add (float first, float second)
{
    return first+second;
}

float Math_Processor::subtract (float first, float second)
{
    return first-second;
}

float Math_Processor::multiply (float first, float second)
{
    return first*second;
}

float Math_Processor::divide (float first, float second)
{
    string w="Dividing by 0 is forbidden!";
    if (second==0) throw w;
    return first/second;
}
/////////////////////////////////
Advanced_Math_Processor::Advanced_Math_Processor(int c, int n)
{
    time_needed=0;
    clock=c;
    number=n;
}

int Advanced_Math_Processor::time_to_do()
{
    time_needed++;
    time_needed=time_needed%clock;
    return time_needed;
}

int Advanced_Math_Processor::get_actual()
{
    return time_needed;
}

int Advanced_Math_Processor::get_clock()
{
    return clock;
}

int Advanced_Math_Processor::get_number()
{
    return number;
}

float Advanced_Math_Processor::exponent(float base,float exponent)
{
    float result;
    result=pow(base,exponent);
    return result;
}

float Advanced_Math_Processor::pitagoras (float a, float b)
{
    float c;
    c=a*a+b*b;
    float result;
    result=sqrt(c);
    return result;
}
//////////////////////////

Text_Processor::Text_Processor(int c, int n)
{
    time_needed=0;
    clock=c;
    number=n;
}

int Text_Processor::time_to_do()
{
    time_needed++;
    time_needed=time_needed%clock;
    return time_needed;
}

int Text_Processor::get_actual()
{
    return time_needed;
}

int Text_Processor::get_clock()
{
    return clock;
}

int Text_Processor::get_number()
{
    return number;
}

int Text_Processor::how_many(string word, char letter)
{
    int result=0;
    int s=word.size();
    for (int i=0;i<s;i++)
    {
        if (word.at(i)==letter) result++;
    };
    return result;
}

string Text_Processor::delete_letter(string word, char letter)
{
    int s=word.size();
    char let;
    for (int i=0;i<s+1;)
    {
        let=word[i];
        if (let==letter) word.erase(word.begin()+i);
        else i++;
    };
    return word;
}
