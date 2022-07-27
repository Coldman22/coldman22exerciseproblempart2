//Check if a character is a Vowel or consonant.
#include <iostream>
using namespace std;

int main()
{
    char c;
    cout<<"Enter a character: ";
    cin>>c;

    if (!isalpha(c))
    {
        cout<<"Error! non - alphabetic character.";
    }
    else
    {
        char temp = tolower(c);
        bool is_vowel;

        is_vowel = (temp == 'a' || temp == 'e' || temp == 'i' || temp == 'o' || temp == 'u' );

        if(is_vowel)
           cout<<c<<" is  a vowel.";
        else
           cout<<c<<" is a consonant.";
    }
    
    return 0;
}