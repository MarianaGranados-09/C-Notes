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

//using cerr to debug is better than cout


//using getline to get input string text
int main()
{
    cout<<"Enter your full name: "<<endl;
    string name;
    getline(cin>>ws, name);

    cout<<"Your name is "<<name;
    return 0;
}


