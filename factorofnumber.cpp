// Find the factor of number.
#include <iostream>
using namespace std;

int main(){
    int i,n;
    cout<<"Enter an integer: ";
    cin>>n;

    for ( i = 1; i <= n; i++)
    {
        if(n%2==0)
           cout<<i<<", ";
    }
    return 0;
}