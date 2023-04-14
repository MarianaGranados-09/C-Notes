#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
    /*Write a program using vectors and iterators that allows a user to maintain
    a list of his or her favorite games. The program should allow the user to
    list all game titles, add a game title, and remove a game title.*/

    string game;
    string gameDelete;
    char op;
    char op2;
    vector<string> games;
    vector<string>::const_iterator iter;
    vector<string>::const_iterator current;

    loop:
    while(true)
    {
        cout<<"Please enter your favorite video-game!"<<endl;
        cin>>game;
        games.push_back(game);
        cout<<"\n Do you want to exit? (y/n)"<<endl;
        cin>>op;
        if(op == 'y')
            break;

    }

     cout<<"Your favorite games are: \n";
     for (iter = games.begin(); iter != games.end(); iter++)
    {

        cout<<*iter<<endl;
    }

    cout<<"Do you want to add another game or delete an existing one? (a/d)";
    cin>>op2;
    if(op2 == 'a')
        goto loop;
    else
    {
        cout<<"Enter a game to delete: \n";
        cin>>gameDelete;
        iter = find(games.begin(), games.end(), gameDelete);
        if(iter != games.end())
        {
            games.erase(iter);
            cout<<"The game "<<gameDelete<<" was deleted.\n";
        }
        else
        {
            cout<<"Game not found\n";
        }

    }

    cout<<"Here's an updated list of your favorite games: \n";
     for (iter = games.begin(); iter != games.end(); iter++)
    {

        cout<<*iter<<endl;
    }

    return 0;
}
