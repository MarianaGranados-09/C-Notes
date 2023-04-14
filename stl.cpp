#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    vector<int>::const_iterator iter;
    cout<<"Creating a list of scores";
    vector<int> scores;

    scores.push_back(7500);
    scores.push_back(1500);
    scores.push_back(3500);


    cout<<endl;
    cout<<"High Scores: "<<endl;
    for(iter = scores.begin(); iter != scores.end(); iter++)
    {
        cout<<*iter<<endl;
    }

    cout<<"Finding a score"<<endl;
    int score;
    cout<<"Enter a score to find: "<<endl;
    cin>>score;
    //using the find algorithm, given a range and a value to find
    //iter will reference the first occurrence of score in the vector
    //if the value is found. So as long as iter is not equal to scores.end()
    //score if found. Otherwise, iter = scores.end(),thus, score was not found

    iter = find(scores.begin(), scores.end(), score);
    if(iter != scores.end())
    {
        cout<<"Score found"<<endl;
    }
    else
    {
        cout<<"Score not found"<<endl;
    }

    cout<<"Randomizing Scores"<<endl;
    //randomize scores using the random_shuffle() algo
    srand(static_cast<unsigned int>(time(0)));
    random_shuffle(scores.begin(), scores.end());
    cout<<"High Scores: \n";
    for (iter = scores.begin(); iter != scores.end(); ++iter)
    {
        cout<<*iter<<endl;
    }
    //sort() algorithm sorts the elements of a seq. in ascending order
    cout<<"\Sorting scores.";
    sort(scores.begin(), scores.end());
    cout<<"\n High Scores: \n";
    for (iter = scores.begin(); iter != scores.end(); ++iter)
    {
        cout<<*iter<<endl;
    }
    
    //More STL (Standard Template Library) algos
    
    //using the capacity() vector member function returns the capacity
    //of a vector: number of elements it can hold
    
    //the reserve() member function increases the capacity of a vector
    //to the number supplied as an argument. Gives you control over when
    //a reallocation of additional memory occurs.

    return 0;
}
