#include "Functions.h"

float String_to_float(string nps)
{
    string::size_type sz;
    float number;
    number=stof (nps, &sz);
    return number;
}

string Float_to_string (float number)
{
    string nps;
    stringstream ss;
    ss<<number;
    nps=ss.str();
    return nps;
}

void fillVector(vector <Result>&neww, string str1, string str2, string str3, string str4, int t, float n)
{
    Result nowyRes(str1,str2,str3,str4,t,n);
    neww.push_back(nowyRes);
}

void printVector (vector <Result>&neww)
{
    int r;
    r=neww.size();
    for (int i=0;i<r;i++)
    {
        cout<<neww[i]<<endl;
    }
}


void fillVector_arg(vector <Task>&neww){
    string str1, str2, str3;
        cin>>str1>>str2>>str3;

        Task nowyRes(str1,str2,str3);
        neww.push_back(nowyRes);
    cout<<endl;
}


void printVector_arg (vector <Task>&neww)
{
    int r;
    r=neww.size();
    for (int i=0;i<r;i++)
    {
        cout<<i<<" "<<neww[i]<<endl;
    }
}
