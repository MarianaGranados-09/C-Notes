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

//hidden pointer "this"

class Simple
{
private:
    int m_id;
public:
    Simple(int id):m_id{id}
    {
        
    }
    
    void setID(int ID){ m_id = id; }
    int getID(){ return m_id; }
};

int main()
{
   Simple A{1}; //this = &A inside Simple constructor
   A.setID(2); //this = &A inside member function setID
   cout<<A.getID()<<endl;
   
    return 0;
}


