#include "Help.h"

string Task::Arg_1()
{
    return first;
}

string Task::Arg_2()
{
    return second;
}

string Task::To_do()
{
    return task;
}

Task::Task(string str_1="empty", string str_2="empty", string str_3="empty")
{
    task=str_1;
    first=str_2;
    second=str_3;
}

Result::Result (string str_1="empty", string str_2="empty", string str_3="empty", string str_4="empty", int t=0, int n=0):Task(str_1, str_2, str_3)
{
    time=t;
    res=str_4;
    numb=n;
}

Result::Result (Task &object, string str="empty", int t=0, int n=0):Task(object)
{
    time=t;
    res=str;
    numb=n;
}

string Result::get_result()
{
    return res;
}

int Result::get_time()
{
    return time;
}
