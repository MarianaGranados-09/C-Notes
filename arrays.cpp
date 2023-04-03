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
using std::cerr;
using std::ws;

//Fixed arrays have memory allocated at compile time, limitations:
//fixed arrays cannot have a length based on either user input
//of some other value calculated at runtime

//Fixed arrays have a fixed length that can not be changed

//Dynamic arrays: length can be set at runtime, and length can be changed


enum StudentNames
{
    kenny, //0
    kyle, //1
    stan, //2
    butters, //3
    cartman, //4
    max_students //5
};


int main()
{
    //int arr[5]{0,1,2,3,4}; //explicitly define the length of the array
    //Arrays and enums
    //Setting up an enumeration where one enumerator maps to each of the possible array indices:
    int testScores[max_students]{}; //allocate 5 integers
    testScores[stan] = 76; //much clearer way to see what each of the array elements represents
    
    return 0;
}


