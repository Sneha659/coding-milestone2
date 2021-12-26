/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    float salary,year,bonus;
    cout<<"enter years of service and salary"<<endl;
    cin>>year>>salary;
    bonus=year>5?(.05*salary):0;
    cout<<"bonus is"<<endl<<bonus;
    return 0;
}
