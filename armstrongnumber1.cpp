// check the number is a armstrong number.
#include <iostream>
using namespace std;

int main()
{
    int num, temp, remainder, result;

    cout<<"Enter a 3 digit number: ";
    cin>> num;

    temp = num;

    while (temp != 0)
    {
        remainder = temp % 10;

        result += remainder * remainder * remainder;

        temp /= 10;
    }
    if(result == num)
        cout<<num<<"  is a prime.";
    else
        cout<<num<<" is not a prime.";
    return 0;
}