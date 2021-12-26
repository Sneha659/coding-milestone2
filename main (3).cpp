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
    int netamount,purchase;
    cout<<"enter the purchase amount"<<endl;
    cin>>purchase;
    if(purchase>1000)
    {
        netamount=purchase-100;
        cout<<"net amount after discount"<<endl<<netamount<<endl;}
    else
    {cout<<"net amount is"<<purchase<<endl;}
    return 0;
}
