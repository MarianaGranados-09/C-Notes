#include <iostream>
#include <vector>

using namespace std;

int main()
{

    //vector class defines one kind of container
    //it meets the description of a dynamic array
    //that can grow and shrink in size as needed
    vector<string> inventory;
    inventory.push_back("sword");
    inventory.push_back("armor");
    inventory.push_back("shield");

    //declares iterator named myIterator for a vector that contains
    //string objects
    vector<string>::iterator myIterator;

    //iterators are values that identify a particular element in a container
    //Given an iterator, you can access the value of the element

    //A constant iterator cant be used to change the element to which it refers
    //the element must remain constant. Provides read-only access
    vector<string>::const_iterator iter;

    cout<<"Your items: "<<endl;
    //looping through vector
    //.begin() to return first element of vector
    //.end() to return one past the last element of vector
    for (iter = inventory.begin(); iter != inventory.end(); iter++)
    {
        //dereferencing an Iterator with *iter, which the iterator
        //refers.
        cout<<*iter<<endl;
    }

    cout<<"You trade your sword for a battle axe."<<endl;
    //Changing the value of a vector element
    //myIterator to reference the first element of inventory
    myIterator = inventory.begin();
    //then change value of the first element: Assign "battle axe" to
    //the element that myIterator references.
    *myIterator = "battle axe";
    cout<<"Your items: "<<endl;
    for (iter = inventory.begin();iter != inventory.end(); iter++)
    {
        cout<<*iter<<endl;
    }

    cout<<"You recover a crossbow from an enemy."<<endl;
    inventory.insert(inventory.begin(), "crossbow");
    for (iter = inventory.begin();iter != inventory.end(); iter++)
    {
        cout<<*iter<<endl;
    }

    cout<<"Your armor is destroyed in a fierce battle"<<endl;
    inventory.erase((inventory.begin() + 2));
    for (iter = inventory.begin();iter != inventory.end(); iter++)
    {
        cout<<*iter<<endl;
    }

    return 0;
}
