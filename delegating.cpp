#include <iostream>
#include <array>
#include <cassert>
#include <string>
#include <cstdint>

using std::cout;
using std::cin;
using std::endl;
using std::array;
using std::string;

class Employee
{
private:
    int m_id{};
    string m_name{};
public:
    Employee(int id=0, string name =""):
        m_id{id}, m_name{name}
        {
            cout<<"Employee "<<m_name<<" created."<<endl;
        }
        //Use of a delegating constructor to minimize redundant code
        Employee(string name): Employee{0, name}
        {
            
        }
};


int main()
{
    

    return 0;

}


