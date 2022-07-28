// Make a simple calculor using Switch-case.
#include <iostream>
using namespace std;

int main()
{
    char op;
    float num1, num2;
    
    cout<<"Enter the operator(+,-,*,/): ";
    cin>>op;
    cout<<"Enter the 2 operands: ";
    cin>>num1>>num2;

    switch (op)
    {
    case '+':
        cout<<num1<<"+"<<num2<<"="<<num1+num2;
        break;
    case '-':
        cout<<num1<<"-"<<num2<<"="<<num1-num2;
        break;
    case '*':
        cout<<num1<<"*"<<num2<<"="<<num1*num2;
        break;
    case '/':
        cout<<num1<<"/"<<num2<<"="<<num1/num2;
        break;
        
    
    default:
    cout<<"Error!";
        break;
    }
    return 0;
}