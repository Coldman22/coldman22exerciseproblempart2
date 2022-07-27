//display fibonnaci series.
#include <iostream>
using namespace std;

int main()
{
    int n,t1=0,t2=1,next_term =0;
    cout<<"Enter a number of terms: ";
    cin>>n;
    cout<<"Fibonacci Series: ";

    for (int i = 1; i <= n; i++)
    {
        cout<<t1<<", ";
        next_term = t1+t2;
        t1= t2;
        t2 = next_term;
    }
    return 0;
}