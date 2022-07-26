// check the number is positive or negative.
#include <iostream>
using namespace std;

int main()
{
    double num;
    cout<<"Enter a integer:";
    cin>>num;

    if (num < 0.0)
    {
        cout<<"Negative number.";
    }
    else if (num > 0.0)
    {
        cout<<"Positive number.";
    }
    else
    {
        cout<<"You entered 0.";
    }
    return 0;
}