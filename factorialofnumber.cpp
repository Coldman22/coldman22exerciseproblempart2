//find the factorial of number.
#include <iostream>
using namespace std;

int main()
{
    int n, i;
    unsigned long long factorial = 1;
    cout<<"Enter the positive number: ";
    cin>>n;

    if (n <= 0)
    {
        cout<<"Error!";
    }
    else
    {
        for ( i = 1; i <= n; i++)
        {
            factorial *= i;
        }
        cout<<"Factorial of "<<n<<" = "<<factorial;
    }
    return 0;
}