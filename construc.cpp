#include <iostream>
#include <array>
#include <cassert>

using std::cout;
using std::cin;
using std::endl;
using std::array;

//Constructors is a special kind of class member function that is automatically
//called when an object of that class is created. They are typically used
//to initialize member variables of the class to appropriate user-provided
//values. After a constructor executes, the object should be in a well-defined, usable state

//unlike normal member functions, constructors have specific rules for
//how they must be named:

//1. must have the same name as the class
//2. must have no return type

//A constructor that takes no parameters is called a default constructor
//The default constructor is called if no user-provided initialization values are provided

class Fraction
{
private:
    int p_numerator;
    int p_denominator;

public:
    Fraction() //default constructor
    {
        p_numerator = 0;
        p_denominator = 1;
    }

    int getNumerator(){ return p_numerator;}
    int getDenominator() { return p_denominator; }
    //converts between types
    //static_cast<new_type> (expression): returns a value of type, new_type
    double getValue() { return static_cast<double>(p_numerator) / p_denominator; }
};

int main()
{
    //initialized our class object using value-initialization
    Fraction frac1{}; //calls Fraction() default constructor
    cout<<frac1.getNumerator()<<'/'<<frac1.getDenominator()<<endl;
    return 0;

}
