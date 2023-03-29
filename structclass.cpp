#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;


//the struct defines a nested enum named Contract that is used as the type of member contract
//nested type alias named IDType

//struct keyword for data only structures
//class keyword for OOP

struct Employee
{
    enum Contract //nested type
    {
        permanent,
        temporary,
        contractor,
    };

    using IDType = int; //nested type alias

    string name;
    IDType id;
    double wage;
    Contract contract;
};


int main()
{
    enum contract;
    Employee Emp1{"Mario", 290, 849.34};
    cout<<Emp1.name;
    return 0;
}
