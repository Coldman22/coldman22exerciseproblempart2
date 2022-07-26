//program to find the largest among three number.
#include <iostream>
using namespace std;

int main()
{
    double n1,n2,n3;
    cout<<"Enter 3 number: ";
    cin>>n1>>n2>>n3;

    if (n1>= n2 && n1>=n3)
    {
        cout<<"Greater number: "<<n1;
    }
    else if (n2>=n1 && n2>=n3)
    {
        cout<<"Greater number: "<<n2;
    }
    else
    {
        cout<<"Greater number: "<<n3;
    }
    return 0;
}