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
    //double x;
    //vector<double> homework; //defined using template classes

    cout<<"Enter your midterm and final exam grades: ";
    double midtermEx, finalEx;
    cin>>midtermEx>>finalEx;

    cout<<"Enter all your homework grades, followed by end-of-file: ";
    vector<double> homework;
    double x;
    //invariant: homework contains all the homework grades read so far
    while(cin >> x)
    {
        homework.push_back(x); //append a new element to the end of vector
    }

    //check that the student entered some hw grades
    //vector type defines a type named vector<double>::size_type
    //and a function named size.

    //by using typedef we say that we want the name that we defined to be
    //synonym for the given type, rather than a variable of that type.

    //this, it defines the name vec_sz as a synonym for vector<double>::size_type
    typedef vector<double>::size_type vec_sz;
    vec_sz size = homework.size();
    if(size == 0)
    {
        cout<<endl<<"You must enter your grades, try again."<<endl;
        return 1;
    }

    //sort the grades by calling a library function, sort function defined in the <algorithm>
    //header rearranges the values in a container so that they are in nondecreasing order
    sort(homework.begin(), homework.end());

    //compute the median homework grade
    //once sorted, we find the middle element or elements
    vec_sz middle = size/2;
    double median;
    median = size % 2 == 0 ? (homework[middle] + homework[middle-1]) / 2 : homework[middle];

    //compute and write the final grade
    streamsize prec = cout.precision();
    cout<<"Your final grade is "<<setprecision(3)
    <<0.2 * midtermEx + 0.4*finalEx+0.4*median
    <<setprecision(prec)<<endl;

    return 0;
}
