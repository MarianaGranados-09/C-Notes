#include <iostream>
#include <iomanip>
#include <ios>
#include <algorithm>
#include <string>
#include <vector>

using std::cin;     using std::sort;
using std::cout;    using std::streamsize;
using std::endl;    using std::string;
using std::setprecision;    using std::vector;

int main()
{

    /*typedef vector<int> vInt;

    vInt v;
    v.push_back(190);
    v.push_back(200);
    v.push_back(25);

    for(auto X : v){
        cout<<X<<" ";
    } */

    //using typedef with arrays
    //typedef <data_type> <alias_name> [<size>]

    typedef int arr[3];

    arr array1{1,1,1};

    cout<<"Array output: "<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<array1[i]<<" ";
    }


    return 0;
}

