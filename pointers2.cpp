#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

void badSwap(int x, int y);
void goodSwap(int* const pX, int* const pY);

int main()
{
    int myScore = 150;
    int yourScore = 1000;
    cout<<"Original values\n";
    cout<<"myScore: "<<myScore<<endl;
    cout<<"yourScore: "<<yourScore<<endl;

    cout<<"Calling badSwap()\n";
    badSwap(myScore, yourScore);
    cout<<"myScore: "<<myScore<<endl;
    cout<<"yourScore: "<<yourScore<<endl;

    cout<<"Calling goodSwap()\n";
    goodSwap(&myScore, &yourScore);
    cout<<"myScore: "<<myScore<<endl;
    cout<<"yourScore: "<<yourScore<<endl;
    return 0;
}

void badSwap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}

void goodSwap(int* const pX, int* const pY)
{
    //store value pointed to by pX in temp
    int temp = *pX;
    //store value pointed to by pY in address pointed to by pX
    *pX = *pY;
    //store value originally pointed to by pX in address pointed to by pY
    *pY = temp;
}
