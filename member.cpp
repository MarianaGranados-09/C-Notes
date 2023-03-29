#include <iostream>
#include <iomanip>
#include <ios>
#include <algorithm>
#include <string>
#include <vector>

using std::cin;     using std::sort;
using std::cout;    using std::streamsize;
using std::endl;    using std::string;
using std::setprecision;    using std::vector;

struct DateStruct
{
    int year;
    int month;
    int day;
};

//or
class DateClass
{
public:
    int m_year;
    int m_month;
    int m_day;

    void print()
    {
        cout<<m_year<<'/'<<m_month<<'/'<<m_day;
    }
};

int main()
{
    DateClass today {2020, 10, 14};

    today.m_day = 16;
    today.print();

    return 0;
}

//in OOP, we want our types to not only hold data but to provide
//functions that work with data as well. This is done via the class
//keyword which defines a new program-defined type

//member functions defined inside a class are called methods


