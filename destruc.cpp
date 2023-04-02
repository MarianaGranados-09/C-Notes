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

//destructor is a special kind of class member function
//that is executed when an object of that class is destroyed

//destructors are designed to "clean up'

class Simple
{
private:
    int m_nID{};
public:
    //Constructor assigning nID to m_nID
    Simple(int nID):m_nID{nID}
    {
        cout<<"Constructing Simple"<<nID<<endl;
    }
    //Destructor
    ~Simple()
    {
        cout<<"Destructuring Simple"<<m_nID<<endl;
    }
    //getter
    int getID()
    {
        return m_nID;
    }

};

int main()
{
    //Allocate a Simple on the stack
    Simple simple{1};
    cout<<simple.getID()<<endl;

    //Allocate a Simple dynamically
    Simple* pSimple{ new Simple{2} };
    cout<<pSimple->getID()<<endl;

    //Allocated pSimple dynamically, so we have to delete it
    delete pSimple;

    return 0;

}


