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


    //typedef with pointers
    //used for both data pointers as well as function pointers


    //data pointers
    //typedef <data_type>* <alias_name>

    /*int a = 10;
    int b = 20;

    typedef int* iPtr;
    iPtr pointer_to_a = &a;
    iPtr pointer_to_b = &b;

    cout<<"a is: "<<*pointer_to_a<<endl;
    cout<<"b is: "<<*pointer_to_b<<endl;
    */

    //function pointers
    //typedef <return_type> (*<alias_name>)(<parameter_type>)

    //normal pointer to a function
    int (*func_ptr1)(int, int);
    //using typedef with pointer to a function
    typedef int(*func_ptr2)(int, int);

    //function to multiply two numbers
    int product(int u, int v)
    {
        return u*v;
    }


int main()
{
    func_ptr1 = &product;

    //using typedefed function pointer for creating new
    //function pointer "new_func"
    
    //typedef function pointer used to create more function pointers taking
    //two integers as arguments with return type int
    func_ptr2 new_func_ptr = &product;

    //using normal pointer to a function
    int x2 = (*func_ptr1)(3,2);

    //using the new function pointer
    int x1 = (*new_func_ptr)(2,4);

    cout<<x1<<endl;


    return 0;
}
