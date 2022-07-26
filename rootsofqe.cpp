// Find the roots of quadratic equation.
/* The standard form of quadratic equation is a(x^2)+ bx+ c=0 
where a,b,c are coefficient and a connot be 0*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a,b,c,x1,x2;
    double discriminant, real , imaginary;

    cout<<"Enter the coeffiecent a,b,c respectively: ";
    cin>>a>>b>>c;

    discriminant = b*b - 4*a*c;

    if (discriminant > 0.0)
    {
        x1 = (-b+sqrt(discriminant)/(2*a));
        x2 = (-b-sqrt(discriminant)/(2*a));
        cout<<"Roots are real and different."<<endl;
        cout<<"x1 = "<<x1<<endl;
        cout<<"x2 = "<<x2<<endl;
    }
    else if (discriminant == 0.0)
    {
        x1 = -b/(2*a);
        cout<<"Roots are real and same."<<endl;
        cout<<"x1 = x2= "<<x1<<endl;
    }
    else
    {
        real = -b/(2*a);
        imaginary = sqrt(-discriminant)/(2*a);
        cout<<"Roots are complex and different."<<endl;
        cout<<"x1 = "<<real<<"+"<<imaginary<<"i"<<endl;
        cout<<"x2 = "<<real<<"-"<<imaginary<<"i"<<endl;
    }
    return 0;
}