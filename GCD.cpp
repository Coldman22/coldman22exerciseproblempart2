/*GCD (Greatest Common Divisor ) also known as the Highest Common Factor for a set of two numbers is largest integer that can exactly divide both numbers
(without a remainder).
There are different ways to calculate GCD of two integers(for both positive integers and nagative integers) using loops and decision making statement.*/
//gcd for both positive numbers and negative numbers.
#include <iostream>
using namespace std;

int main()
{
    int n1,n2;
    cout<<"Enter 2 numbers: ";
    cin>>n1>>n2;

    n1= (n1>0)? n1: -n1;
    n2= (n2>0)? n2: -n2;

    while (n1 != n2)
    {
        if(n1 > n2)
           n1 -= n2;
        else
           n2 -= n1;
    }
    cout<<"GCD ="<<n1;
    return 0;
}
