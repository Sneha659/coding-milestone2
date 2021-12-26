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
    int n,sum=0;
    cout<<"enter the number upto which sum is to be found"<<endl;
    cin>>n;
    cout<<"table of"<<n<<endl;
    for(int i=0;i<=n;i++)
      sum+=i;
    cout<<"sum is"<<endl<<sum;
    return 0;
}
