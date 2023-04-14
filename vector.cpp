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

    cout<<"You have "<<inventory.size() <<" items."<<endl;

    cout<<"Your items are: "<<endl;
    for(int i=0;i<inventory.size();++i)
    {
        cout<<inventory[i]<<endl;
    }

    cout<<"Your shield is destroyed in a battle."<<endl;
    inventory.pop_back();
    cout<<"Now your items are: "<<endl;
    for(int i=0;i<inventory.size();++i)
    {
        cout<<inventory[i]<<endl;
    }

    cout<<"You were robbed of all your possessions by a thief!"<<endl;
    inventory.clear();
    if(inventory.empty())
    {
        cout<<"You have nothing in your inventory."<<endl;

    }
    else
    {
        cout<<"You have at least one item."<<endl;
    }

    return 0;
}
