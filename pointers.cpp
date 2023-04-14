#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
    //A pointer is a variable that can contain a memory address
    //they're often used to access the contents of other variables

    int* pPointer1;
    int* pScore = 0; //initialize a pointer: point to nothing

    int score = 1000;
    pScore = &score; //assign pointer pScore address of variable score

    cout<<"Assigning &score to pScore\n";
    cout<<"&score is: "<<&score<<endl; //address of score variable

    cout<<"score is: "<<score<<endl;
    cout<<"*pScore is: "<<*pScore<<endl; //value pointed to by pointer
    //*pScore means, object to which pScore points

    return 0;
}
