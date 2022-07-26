// check whether the number is even or odd using ternary operator.
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter an integer: ";
    cin>>num;

    (num % 2 == 0)?cout<<num<<" is even.":cout<<num<<" is odd.";
    return 0;
}