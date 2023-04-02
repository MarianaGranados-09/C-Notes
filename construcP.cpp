#include <iostream>
#include <array>
#include <cassert>

using std::cout;
using std::cin;
using std::endl;
using std::array;

//Constructors with parameters

class Fraction
{
private:
    int pnumerator{};
    int pdenominator{};

public:
    //reducing by one constructor
    Fraction(int num = 1, int den = 0)
    {
        assert(den != 0);
        pnumerator = num;
        pdenominator = den;
    }
    int getNumerator() { return pnumerator; }
    int getDenominator() { return pdenominator; }
    double getValue() { return static_cast<double>(pnumerator) / pdenominator; }

};

//by having two constructors a default c. will be called in the default case
//while a second constructor takes two parameters

int main()
{
    //using a constructor with parameters
    Fraction fiveThirds{5,3}; //list initialization
    Fraction threeQuarters(3,4); //direct init.
    
    Fraction six{6}; //still calls Fraction(int, int) constructor, 
    //second parameter uses default value of 1


    return 0;

}


