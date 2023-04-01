#include <iostream>
#include <array>
#include <cassert>

using std::cout;
using std::cin;
using std::endl;
using std::array;

/*
//Write a class that implements a simple stack from scratch
The class should be named Stack, and should contain:

    A private array of integers of length 10.
    A private integer to keep track of the size of the stack.
    A public member function named reset() that sets the size to 0.
    A public member function named push() that pushes a value on the stack. push() should return false if the array is already full, and true otherwise.
    A public member function named pop() that pops a value off the stack and returns it. If there are no values on the stack, the code should exit via an assert.
    A public member function named print() that prints all the 
    */
    
    
class Stack
{
private:
    //int arr[10];
    //int sizeTracker = 0;

    //array to store elements
    using Array = array<int,10>;
    //Type alias for the type of the indexes
    using Index = Array::size_type;

    Array Arr1{}; //store stack
    Index sizeTracker{0}; //index of the next free
    //element on the stack

public:
    void reset()
    {
        sizeTracker = 0;
    }

    bool push(int numAdded)
    {
        //if current size is equal to total size
        if(sizeTracker == Arr1.size())
        {
            return false;
        }
        else
        {
            Arr1[sizeTracker++] = numAdded;
            return true;
        }
    }

    int pop()
    {
        //if there are no elements, assert out
        //if condition inside false, asserts
        assert(sizeTracker > 0 && "Can't pop empty stack");
        //else, eliminates the last value.
        //this is done by printing the vector minus the last value
        // --sizeTracker
        return Arr1[--sizeTracker];
    }



    void print()
    {
        cout<<"( ";
        for(int i=0;i<sizeTracker;i++)
        {
            cout<<Arr1[i]<<" ";
        }
        cout<<")"<<endl;
    }
};

int main()
{
    Stack stack1;
    stack1.print();

    stack1.push(5);
    stack1.push(3);
    stack1.push(8);
    stack1.print();

    stack1.pop();
    stack1.print();

    stack1.pop();
    stack1.print();

    stack1.reset();
    stack1.print();

}
