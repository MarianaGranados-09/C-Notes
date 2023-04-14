#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

void increase(int* const arr, const int NUM_ELEMENTS);
void display(const int* const arr, const int NUM_ELEMENTS);

int main()
{
    //Arrays and pointers: Array passer
    cout<<"Creating an array of high scores.\n";
    const int NUM_SCORES=3;
    int highScores[NUM_SCORES] = {5000, 3500, 2700};

    cout<<"Displaying scores using array name as constant pointer\n";
    //using array name as a constant pointer: an array name is a constant
    //pointer to the first element of the array
    cout<<*highScores<<endl;
    //element in position 1 of highScores
    cout<<*(highScores+1)<<endl;
    //element in position 2 of highScores
    cout<<*(highScores+2)<<endl; // = highScores[2]

    //arrayName[i] = *(arrayName + i)

    cout<<"Increasing scores by passing array as a constant pointer\n";
    //an array name is a constant pointer, it can be used to efficiently pass
    //an array to a function

    //the array name is accepted as a constant pointer
    increase(highScores, NUM_SCORES);
    cout<<"Displaying scores by passing array as a constant pointer to a constant\n";
    display(highScores, NUM_SCORES);

    return 0;
}

void increase(int* const arr, const int NUM_ELEMENTS)
{
    for (int i=0; i<NUM_ELEMENTS;i++)
    {
        arr[i] +=500;
    }
}

void display(const int* const arr, const int NUM_ELEMENTS)
{
    for(int i=0;i<NUM_ELEMENTS;i++)
    {
        cout<<arr[i]<<endl;
    }
}


