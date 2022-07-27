// range determined by user
#include <iostream>
using namespace std;

int main()
{
    int n, range;
    cout<<"enter a positive: ";
    cin>>n;
    cout<<"Enter a range: ";
    cin>>range;

    if (range <= 0)
    {
        cout<<"Error!";
    }
    else
    {
        for (int i = 1; i <= range; i++)
        {
            cout<<n<<" * "<<i<<" = "<<n*i<<endl;
        }
        
    }
    return 0;
}