#include <iostream>
#include <array>
#include <cassert>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::array;
using std::string;

//Quizz 1:
/*
Write a class named Ball. Ball should have two private member
variables with default values: m_color (“black”) and m_radius (10.0).
Ball should provide constructors to set only m_color, set only m_radius,
set both, or set neither value. For this quiz question, do not use default
parameters for your constructors.
Also write a function to print out the color and radius of the ball. */

class Ball
{
private:
    string m_color = "black";
    double m_radius = 10.0;

public:
    Ball(string color)
    {
        m_color = color;
    }
    Ball(double radius)
    {
        m_radius = radius;
    }
    Ball(string color, double radius)
    {
        m_color = color;
        m_radius = radius;
    }
    Ball() = default;

    void print()
    {
        cout<<"color: "<<m_color<<", radius: "<<m_radius<<endl;
    }
};


int main()
{
    Ball def{};
    def.print();

    Ball blue{"blue"};
    blue.print();

    Ball twenty{20.0};
    twenty.print();

    Ball blueTwenty{"blue", 20.0};
    blueTwenty.print();

    return 0;

}


