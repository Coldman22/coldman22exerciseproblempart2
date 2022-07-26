// Program to find a larger number among two integer.
#include <iostream>
using namespace std;

int main()
{
    double n1, n2;
    cout<<"enter 2 numbers: ";
    cin>> n1>> n2;

    if (n1 > n2)
    {
        cout<<"Greater number: "<<n1;
    }
    else
    {
        cout<<"Greater number: "<<n2;
    }
    return 0;
}