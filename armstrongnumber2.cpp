// Check aRmstrong number for n digits.
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    int num, temp, remainder, power;
    int n=0, result =0 ;
    cout<<"Enter an integers: ";
    cin>>num;
    temp =num;
    while (temp != 0)
    {
        temp /= 10;
        ++n;
    }
    temp =num;
    while (temp != 0)
    {
        remainder = temp % 10;
        power = round(pow(remainder,n));
        result += power;
        temp /= 10;
    }
    if(result == num)
        cout<<num<<" is a Armstrong number.";
    else
        cout<<num<<" not an Armstrong number.";
    return 0; 
}