// Display character from A to Z using loop
#include <iostream>
using namespace std;

int main()
{
    char c;

    for ( c = 'A'; c <= 'Z'; ++c) //for uppercase
    {
        cout<<c<<" ";
    }
    cout<<endl;

    for( c = 'a'; c <='z'; ++c) //for lowercase
    {
        cout<<c<<" ";
    }
    return 0;
}