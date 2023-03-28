#include <iostream>

int main()
{
    std::cout << "Hello world!" << std::endl;

    std::cout<<"Enter your first name: ";
    std::string name;
    std::cin>>name;

    std::cout<<"Hello, "<<name<<"!"<<std::endl;

    const std::string greeting = "Hello "+name+"!";
    std::cout<<greeting.size()<<std::endl; //example of calling a member function

    std::string stars(100, '*');
    std::cout<<stars;
    return 0;
}

//Types
/*
bool, either true or false
unsigned, only non negative values
short, int type at least 16 bits
long, int type at least 32 bits
size_t, unsigned int type that holds any object's size

A vector holds a seq. of values of a given type

*/
