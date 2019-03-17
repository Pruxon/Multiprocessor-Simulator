#include <iostream>
#include <vector>
#include <string>

#include "Help.h"
#include "class.h"
#include "Functions.h"
#include "Tests.h"

#define MAX_P 6
using namespace std;


int main()
{
    ///////////////////////////////////////////////////////////////     tests
    test_all();
    ///////////////////////////////////////////////////////////////     variables
    vector <Result> result;
    vector <Task> tasks;
    vector <Math_Processor> Math;
    vector <Advanced_Math_Processor> Adv;
    vector <Text_Processor> Text;
    vector <string> commands;
    vector <float> numbers;
    int number=0;
    int number_m=0;
    int number_a=0;
    int number_t=0;
    float result1=0;
    string result2;
    string action;
    string processor;
    string command,arg1,arg2;

    //////////////////////////////////////////////////////////////      simulation
    do
    {
        cout<<"You can add processor by typing Processor."<<endl<<"Maximum number of all processors is "<<MAX_P<<endl<<"Now are "<<number<<" processors."<<endl;
        /////////////////////////////////////////////////////////       optionally using functions
        if (!Math.empty()||!Adv.empty()||!Text.empty())
        {
            cout<<"You can add commands to queue by typing function."<<endl;
            cout<<"You can delete processor by typing off"<<endl;
        };
        if (tasks.empty()){}
        else
        {
            cout<<"You can run commands by typing run"<<endl;
            cout<<"You can print out tasks by typing print"<<endl;
            cout<<"You can also delete some commands by typing delete"<<endl;
        };
        if (number_m!=0||number_a!=0)
        {
            cout<<"You can also add your own function, based on standard functions."<<endl;
            cout<<"Type programming if you want to do this"<<endl;
        }
        if (commands.empty()){}
        else
        {
            cout<<"You can use your own function by typing my"<<endl;
        };
        if (result.empty()){}
        else
        {
            cout<<"You can print out results by typing result"<<endl;
        };

        cout<<"If you want to finish your work type finish"<<endl;
        cout<<"What you want to do?"<<endl;
        cin>>action;
        cout<<endl;
        /////////////////////////////////////////////////////////       Adding processors
        if (action=="Processor")
        {
            if (number<MAX_P){
            cout<<"Which processor you want to add?"<<endl<<"Available are Math/ Advanced math/ Text"<<endl;
            cout<<"Choose processor by typing Math/ Advanced/ Text"<<endl;
            cin>>processor;
            if (processor=="Math")
            {
                Math_Processor Mathh(2,number_m);
                Math.push_back(Mathh);
                number++;
                number_m++;
            }
            if (processor=="Advanced")
            {
                Advanced_Math_Processor Mathh(4,(number_a+0.1));
                Adv.push_back(Mathh);
                number++;
                number_a++;
            }
            if (processor=="Text")
                {
                Text_Processor Mathh(3,(number_t+0.2));
                Text.push_back(Mathh);
                number++;
                number_t++;
            }
        }
        else
        {
            cout<<"There is no space for more processors!"<<endl;
        }
        cout<<endl;
        }
        /////////////////////////////////////////////////////////       adding functions to queue
        if (action=="function")
        {
            cout<<"List of available functions with codes:"<<endl;
            if (Adv.empty())
            {
                if (Math.empty()){}
                else
                {
                    cout<<"Arg1+Arg2: Add arg1 arg2"<<endl;
                    cout<<"Arg1-Arg2: Substract arg1 arg2"<<endl;
                    cout<<"Arg1*Arg2: Multiply arg1 arg2"<<endl;
                    cout<<"Arg1/Arg2: Divide arg1 arg2"<<endl;
                }
            }
            else
            {
                cout<<"Arg1+Arg2: Add float float"<<endl;
                cout<<"Arg1-Arg2: Substract float float"<<endl;
                cout<<"Arg1*Arg2: Multiply float float"<<endl;
                cout<<"Arg1/Arg2: Divide float float"<<endl;
                cout<<"Arg1^Arg2: Exponent float float"<<endl;
                cout<<"Finding hypotenuse: Pitagoras float float"<<endl;
            }
            if (Text.empty()){}
            else
            {
                cout<<"Counting number of letters in a word: Letters word letter"<<endl;
                cout<<"Deleting letters form word: Delete word letter"<<endl;
            }
            fillVector_arg(tasks);

        }
        /////////////////////////////////////////////////////////       printing out function queue
        if (action=="print") printVector_arg(tasks);
        /////////////////////////////////////////////////////////       running commands
        if (action=="run")
        {

            int s=tasks.size();
            int done=0;
                while (done<s)
                {
        /////////////////////////////////////////////////////////       Maths
                    if (tasks[done].To_do()=="Add"||tasks[done].To_do()=="Subtract"||tasks[done].To_do()=="Divide"||tasks[done].To_do()=="Multiply"||tasks[done].To_do()=="Exponent"||tasks[done].To_do()=="Pitagoras")
                    {
        ///////////////////////////////////////////////////////////////////// Math
                        if (number_m!=0)
                        {
                            for (int i=0;i<number_m;i++)
                            {
                                if (Math[i].get_actual()==0)
                                {
                                    if(tasks[done].To_do()=="Add")
                                    {
                                        result1=Math[i].add(String_to_float(tasks[done].Arg_1()),String_to_float(tasks[done].Arg_2()));
                                        result2=Float_to_string(result1);
                                        Result temp(tasks[done], result2, Math[i].get_clock(),Math[i].get_number());
                                        result.push_back(temp);
                                        done++;
                                    }
                                    else if(tasks[done].To_do()=="Subtract")
                                    {
                                        result1=Math[i].subtract(String_to_float(tasks[done].Arg_1()),String_to_float(tasks[done].Arg_2()));
                                        result2=Float_to_string(result1);
                                        Result temp(tasks[done], result2, Math[i].get_clock(),Math[i].get_number());
                                        result.push_back(temp);
                                        done++;
                                    }
                                    else if(tasks[done].To_do()=="Divide")
                                    {
                                        try
                                        {
                                        result1=Math[i].divide(String_to_float(tasks[done].Arg_1()),String_to_float(tasks[done].Arg_2()));
                                        }
                                        catch (string w)
                                        {
                                            cout<<"Exception: "<<w<<endl;
                                        }
                                        result2=Float_to_string(result1);
                                        Result temp(tasks[done], result2, Math[i].get_clock(),Math[i].get_number());
                                        result.push_back(temp);
                                        done++;
                                    }
                                    else if(tasks[done].To_do()=="Multiply")
                                    {
                                        result1=Math[i].multiply(String_to_float(tasks[done].Arg_1()),String_to_float(tasks[done].Arg_2()));
                                        result2=Float_to_string(result1);
                                        Result temp(tasks[done], result2, Math[i].get_clock(),Math[i].get_number());
                                        result.push_back(temp);
                                        done++;
                                    }
                            }
        ////////////////////////////////////////////////////////////////////      increasing clock
                    for (int i=0;i<number_m;i++)
                    {
                        Math[i].time_to_do();
                    }
                        }
                        }
        ////////////////////////////////////////////////////////////////////////// Advanced
                            if (number_a!=0)
                        {
                            for (int i=0;i<number_a;i++)
                            {
                                if (Adv[i].get_actual()==0)
                                {
                                    if(tasks[done].To_do()=="Add")
                                    {
                                        result1=Adv[i].add(String_to_float(tasks[done].Arg_1()),String_to_float(tasks[done].Arg_2()));
                                        result2=Float_to_string(result1);
                                        Result temp(tasks[done], result2, Adv[i].get_clock(),Adv[i].get_number());
                                        result.push_back(temp);
                                        done++;
                                    }
                                    else if(tasks[done].To_do()=="Subtract")
                                    {
                                        result1=Adv[i].subtract(String_to_float(tasks[done].Arg_1()),String_to_float(tasks[done].Arg_2()));
                                        result2=Float_to_string(result1);
                                        Result temp(tasks[done], result2, Adv[i].get_clock(),Adv[i].get_number());
                                        result.push_back(temp);
                                        done++;
                                    }
                                    else if(tasks[done].To_do()=="Divide")
                                    {
                                        result1=Adv[i].divide(String_to_float(tasks[done].Arg_1()),String_to_float(tasks[done].Arg_2()));
                                        result2=Float_to_string(result1);
                                        Result temp(tasks[done], result2, Adv[i].get_clock(),Adv[i].get_number());
                                        result.push_back(temp);
                                        done++;
                                    }
                                    else if(tasks[done].To_do()=="Multiply")
                                    {
                                        result1=Adv[i].multiply(String_to_float(tasks[done].Arg_1()),String_to_float(tasks[done].Arg_2()));
                                        result2=Float_to_string(result1);
                                        Result temp(tasks[done], result2, Adv[i].get_clock(),Adv[i].get_number());
                                        result.push_back(temp);
                                        done++;
                                    }
                                    else if(tasks[done].To_do()=="Exponent")
                                    {
                                        result1=Adv[i].exponent(String_to_float(tasks[done].Arg_1()),String_to_float(tasks[done].Arg_2()));
                                        result2=Float_to_string(result1);
                                        Result temp(tasks[done], result2, Adv[i].get_clock(),Adv[i].get_number());
                                        result.push_back(temp);
                                        done++;
                                    }
                                    else if(tasks[done].To_do()=="Pitagoras")
                                    {
                                        result1=Adv[i].pitagoras(String_to_float(tasks[done].Arg_1()),String_to_float(tasks[done].Arg_2()));
                                        result2=Float_to_string(result1);
                                        Result temp(tasks[done], result2, Adv[i].get_clock(),Adv[i].get_number());
                                        result.push_back(temp);
                                        done++;
                                    }
                                }
                            }
        ////////////////////////////////////////////////////////////////////      increasing clock
                            for (int i=0;i<number_a;i++)
                            {
                                Adv[i].time_to_do();
                            }
                        }
                    }
    ////////////////////////////////////////////////////////////////        Word operatons
            else if (tasks[done].To_do()=="Letters"||tasks[done].To_do()=="Delete")
            {
                if (number_t!=0)
                {
                    for (int i=0;i<number_t;i++)
                    {
                        if (Text[i].get_actual()==0)
                                {
                                    if(tasks[done].To_do()=="Letters")
                                    {
                                        char letter=tasks[done].Arg_2()[0];
                                        result1=Text[i].how_many(tasks[done].Arg_1(),letter);
                                        result2=Float_to_string(result1);
                                        Result temp(tasks[done], result2, Text[i].get_clock(),Text[i].get_number());
                                        result.push_back(temp);
                                        done++;
                                    }
                                    else if(tasks[done].To_do()=="Delete")
                                    {
                                        char letter=tasks[done].Arg_2()[0];
                                        result2=Text[i].delete_letter(tasks[done].Arg_1(),letter);
                                        Result temp(tasks[done], result2, Text[i].get_clock(),Text[i].get_number());
                                        result.push_back(temp);
                                        done++;
                                    }
                                }
                    }
                }

        /////////////////////////////////////////////////////////// increasing clock
                for (int i=0;i<number_t;i++)
                            {
                                Text[i].time_to_do();
                            }
                }
                }

        /////////////////////////////////////////////////////////       Deleting Task vector after running
            s=tasks.size();
            for (int i=0; i<s;i++) tasks.erase(tasks.begin()+i);
        }
        /////////////////////////////////////////////////////////       Printing results
        if (action=="result")
        {
            printVector(result);
            int s=result.size();
            for (int i=0; i<s;i++) result.erase(result.begin()+i);
        }
        /////////////////////////////////////////////////////////        deleting command
        if (action=="delete")
        {
            printVector_arg(tasks);
            cout<<"Choose number of command you want to delete"<<endl;
            int which;
            cin>>which;
            tasks.erase(tasks.begin()+which);
        }
        /////////////////////////////////////////////////////////       programming
        if (action=="programming")
        {
            cout<<"You can Add, Subtract, Divide, Multiply, by typing it."<<endl;
            cout<<"If you want to end your function type end"<<endl;
            string command;
            do
            {
                cout<<"What you want to do now?"<<endl;
                cin>>command;
                if (command=="Add"||command=="Subtract"||command=="Divide"||command=="Multiply") commands.push_back(command);
                else
                {
                    cout<<"Wrong function name!"<<endl;
                }
            }
            while (command!="end");
    }
    if (action=="my")
    {
        Math_Processor My_Function;
        float a,b;
        cout<<"Write your first two numbers for your function."<<endl;
        cin>>a>>b;
        numbers.push_back(a);
        numbers.push_back(b);
        int s=commands.size();
        for (int i=0;i<s-1;i++)
        {
            cout<<"Write next number for your function"<<endl;
            cin>>a;
            numbers.push_back(a);
        }
        float my_result=0.0;
            if (commands[0]=="Add")
            {
                my_result=My_Function.add(numbers[0],numbers[1]);
            }
            else if (commands[0]=="Subtract")
            {
                my_result=My_Function.subtract(numbers[0],numbers[1]);
            }
            else if (commands[0]=="Divide")
            {
                my_result=My_Function.divide(numbers[0],numbers[1]);
            }
            else if (commands[0]=="Multiply")
            {
                my_result=My_Function.multiply(numbers[0],numbers[1]);
            };
        for (int i=1;i<s;i++)
        {
            if (commands[i]=="Add")
            {
                my_result=My_Function.add(my_result,numbers[i+1]);
            }
            else if (commands[i]=="Subtract")
            {
                my_result=My_Function.subtract(my_result,numbers[i+1]);
            }
            else if (commands[i]=="Divide")
            {
                my_result=My_Function.divide(my_result,numbers[i+1]);
            }
            else if (commands[i]=="Multiply")
            {
                my_result=My_Function.multiply(my_result,numbers[i+1]);
            };
        }
        cout<<"Result of your function is: "<<my_result<<endl;
        int si=numbers.size();
        for (int i=0; i<si;i++) numbers.erase(numbers.begin());
    }
    if (action=="off")
    {
        cout<<"Which processor, you want to delete?"<<endl;
        cout<<"Now you have:"<<endl;
        cout<<number_m<<" Math procesors"<<endl;
        cout<<number_a<<" Advanced procesors"<<endl;
        cout<<number_t<<" Text procesors"<<endl;
        string Proc;
        cin>>Proc;
        if (Proc=="Math")
        {
            Math.erase(Math.begin()+number_m);
            number_m--;
        }
        else if (Proc=="Advanced")
        {
            Adv.erase(Adv.begin()+number_a);
            number_a--;
        }
        else if (Proc=="Text")
        {
            Text.erase(Text.begin()+number_t);
            number_t--;
        };
        number--;
    }
    }
    while(action!="finish");

    return 0;
}



