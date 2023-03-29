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
};

void print(const DateStruct& date)
{
    cout<<date.year<<'/'<<date.month<<'/'<<date.day;
}

int main()
{
    DateStruct today {2020, 10, 14};
    today.day = 16;
    print(today);

    return 0;
}

//in OOP, we want our types to not only hold data but to provide
//functions that work with data as well. This is done via the class
//keyword which defines a new program-defined type


