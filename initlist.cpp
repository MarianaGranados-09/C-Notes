#include <iostream>
#include <array>
#include <cassert>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::array;
using std::string;

//using initialization list

class Something
{
private:
    int m_value1{};
    double m_value2{};
    char m_value3{};

public:
   /* Something(): m_value1{1}, m_value2{2.2}, m_value3{'c'} //initialize
    //our member variables
    {
        //no need for assignment here
    }*/
    //allow caller to pass the initialization values
    Something(int value1, double value2, char value3='c')
        :m_value1{value1}, m_value2{value2}, m_value3{value3}
        {
            //no need for assignment
        }

    void print()
    {
        cout<<"Something(" <<m_value1<<", "<<m_value2<<", "<<m_value3<<")"<<endl;
    }
};

int main()
{
    //Something something{};
    //something.print();

    Something something{1, 2.2}; //value1=1, value2=2.2, value3 gets default
    //value 'c'
    something.print();

    return 0;

}


