#ifndef HELP_H_INCLUDED
#define HELP_H_INCLUDED

#include <iostream>
#include <string>

//#include "Functions.h"

using namespace std;

class Task
{
private:
    string task;
    string first;
    string second;

public:
    Task(string str_1,string str_2,string str_3);
    string To_do();
    string Arg_1();
    string Arg_2();

    friend ostream& operator<<(ostream& wyjscie, Task& pierwszy)
    {
        cout<<pierwszy.To_do()<<" "<<pierwszy.Arg_1()<<" "<<pierwszy.Arg_2()<<endl;
        return wyjscie;
    }
};

class Result:public Task
{
private:
    int time;
    string res;
    float numb;
public:
    Result (string str_1,string str_2,string str_3, string str_4, int t, int n);
    Result (Task &object, string str, int t, int n);
    string get_result();
    int get_time();

    friend ostream& operator<<(ostream& wyjscie, Result& pierwszy)
    {
        cout<<pierwszy.To_do()<<" "<<pierwszy.Arg_1()<<" "<<pierwszy.Arg_2()<<" "<<pierwszy.get_result()<<" "<<pierwszy.get_time()<<" "<<pierwszy.numb<<endl;
        return wyjscie;
    }
};


#endif // HELP_H_INCLUDED
