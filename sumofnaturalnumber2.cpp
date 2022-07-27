//check the sum of natural numbers using do while loop.
#include <iostream>
using namespace std;

int main()
{
    int n, i, sum=0;
    do
    {
        cout<<"Enter a positive number: ";
        cin>>n;
    } while (n<=0);
    
    for ( i = 1; i <= n; i++)
    {
        sum += i;
    }
    
    cout<<"Sum = "<<sum;
    return 0;
}