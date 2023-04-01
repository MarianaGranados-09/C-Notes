#include <iostream>
#include <array>
#include <cassert>

using std::cout;
using std::cin;
using std::endl;
using std::array;

//reason why member variables are private: the separation
//of implementation and interface is useful in programming

//Encapsulation
//Process of keeping the details of how an object is implemented
//hidden away from users of the object. This is implemented via
//access specifiers

//An access function is a shot public function whose job is to retrieve
//or change the value of a private member variable

//Access functions: setters and getters. Getters are values that return
//the value of a private member; Setters are functions that set the value
//of a private member variable

//Example

class Date
{
private:
    int pmonth;
    int pyear;
    int pday;

public:
    //getter
    int getMonth()
    {
        return pmonth;
    }
    //setter
    void setMonth(int month)
    {
        pmonth = month;
    }
    int getYear(){return pyear;}
    void setYear(int year){ pyear = year; }

    int getDay(){return pday;}
    void setDay(int day){ pday = day; }
};

int main()
{
    return 0;

}
