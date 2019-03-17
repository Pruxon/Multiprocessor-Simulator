#include "Tests.h"

int test_add()
{
    Advanced_Math_Processor Advanced(1, 1);
    float a=Advanced.add(1,2);
    if (a==3) return 1;
    else return 0;
}

int test_subtract()
{
    Advanced_Math_Processor Advanced(1, 1);
    float a=Advanced.subtract(1,2);
    if (a==-1) return 1;
    else return 0;
}

int test_multiply()
{
    Advanced_Math_Processor Advanced(1, 1);
    float a=Advanced.multiply(1,2);
    if (a==2) return 1;
    else return 0;
}

int test_divide()
{
    Advanced_Math_Processor Advanced(1, 1);
    float a=Advanced.divide(1,2);
    if (a==0.5) return 1;
    else return 0;
}

int test_exponent()
{
    Advanced_Math_Processor Advanced(1, 1);
    float a=Advanced.exponent(2, 4);
    if (a==16) return 1;
    else return 0;
}

int test_pitagoras()
{
    Advanced_Math_Processor Advanced(1, 1);
    float a=Advanced.pitagoras(3, 4);
    if (a==5) return 1;
    else return 0;
}

int test_delete_letters()
{
    Text_Processor Advanced(1, 1);
    string a=Advanced.delete_letter("kuleczkak", 'k');
    if (a=="ulecza") return 1;
    else return 0;
}

int test_count_letters()
{
    Text_Processor Advanced(1, 1);
    int a=Advanced.how_many("kuleczka", 'k');
    if (a==2) return 1;
    else return 0;
}

void test_all()
{
    int result=0;
    if(test_add()==1) result++;
    else {cout<<"Adding doesn't work!"<<endl;};
    if(test_subtract()==1) result++;
    else {cout<<"Adding doesn't work!"<<endl;};
    if(test_multiply()==1) result++;
    else {cout<<"Adding doesn't work!"<<endl;};
    if(test_divide()==1) result++;
    else {cout<<"Adding doesn't work!"<<endl;};
    if(test_exponent()==1) result++;
    else {cout<<"Adding doesn't work!"<<endl;};
    if(test_pitagoras()==1) result++;
    else {cout<<"Adding doesn't work!"<<endl;};
    if(test_count_letters()==1) result++;
    else {cout<<"Adding doesn't work!"<<endl;};
    if(test_delete_letters()==1) result++;
    else {cout<<"Adding doesn't work!"<<endl;};
    if (result==8) cout<<"Everything works!"<<endl<<endl;
}
