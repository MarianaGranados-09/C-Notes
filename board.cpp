#include <iostream>

//Tic-Tac-Toe Board with multidimensional arrays

using namespace std;

int main()
{
    const int ROWS = 3;
    const int COLUMNS = 3;
    char board[ROWS][COLUMNS] = { {'0', 'X', '0'},
                                  {' ', 'X', 'X'},
                                  {'X', '0', '0'}};

    board[1][0] = 'X';
    cout<<"Here's the tic-tac-toe board: "<<endl;
    for (int i=0;i<ROWS; i++)
    {
        for (int j=0; j<COLUMNS; j++)
        {
            cout<<board[i][j];
        }
        cout<<endl;
    }
    return 0;
}
