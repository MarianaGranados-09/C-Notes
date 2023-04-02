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

//quizz
/*
Write a class named RGBA that contains 4 member variables of
type std::uint8_t named m_red, m_green, m_blue, and m_alpha
(#include cstdint to access type std::uint8_t). Assign default
values of 0 to m_red, m_green, and m_blue, and 255 to m_alpha.
Create a constructor that uses a member initializer list that
allows the user to initialize values for m_red, m_blue, m_green,
and m_alpha. Include a print() function that outputs the value
of the member variables*/
class RGBA
{
private:
    uint8_t m_red;
    uint8_t m_green;
    uint8_t m_blue;
    uint8_t m_alpha;
    
    //using Color = std::uint8_t; //type alias
    //Channel m_red{}; ...

public:
    RGBA(uint8_t red=0, uint8_t green=0, uint8_t blue=0, uint8_t alpha=255)
        : m_red{red}, m_green{green}, m_blue{blue}, m_alpha{alpha}
        {

        }
     void print()
     {
         int ired = int(uint8_t(m_red));
         int igreen = int(uint8_t(m_green));
         int iblue = int(uint8_t(m_blue));
         int ialpha = int(uint8_t(m_alpha));

         cout<<"r="<<ired<<" g="<<igreen<<" b="<<iblue<<" a="<<ialpha<<endl;
     }

};


int main()
{
    RGBA teal{0,127,127};
    teal.print();

    return 0;

}


