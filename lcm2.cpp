//finding LCM using GCD
#include <iostream>
using namespace std;

int main()
{
    int n1, n2, gcd, temp, lcm;
    cout<<"Enter 2 numbers: ";
    cin>>n1>>n2;
    gcd = n1;
    temp = n2;

    while (gcd != temp)
    {
        if (gcd > temp)
        {
            gcd -= temp;
        }
        else  
            temp -= gcd;
    }
    lcm = (n1 * n2) / gcd;
    cout<<"LCM = " <<lcm;
    return 0;
}