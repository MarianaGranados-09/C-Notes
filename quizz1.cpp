#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

/*
a) Create a class called IntPair that holds two integers.
This class should have two member variables to hold the
integers. You should also create two member functions:
one named “set” that will let you assign values to the
integers, and one named “print” that will print the values
of the variables.*/

class IntPair
{
    public:
        int num1, num2;


        void set(int n1, int n2)
        {
            num1 = n1;
            num2 = n2;
        }
        void print()
        {
            cout<<"Pair("<<num1<<", "<<num2<<")"<<endl;
        }
};

int main()
{
    IntPair p1;
    p1.set(1,1);

    IntPair p2{2,2};

    p1.print();
    p2.print();
    return 0;
}
