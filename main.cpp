//This code is for a game of tic tac toe between 2 players
#include <iostream>
#include <stdlib.h>
using namespace std;
char square[10] = {'o','1','2','3','4','5','6','7','8','9'};
int checkwin();
void board();

int main()
{
	int player = 1,i,choice;
    char mark;
    do
    {
        board();
        player=(player%2)?1:2;

        cout << "Player " << player << ", enter a number:  ";
        cin >> choice;

        mark=(player == 1) ? 'X' : 'O';

        if (choice == 1 && square[1] == '1')

            square[1] = mark;
        else if (choice == 2 && square[2] == '2')

            square[2] = mark;
        else if (choice == 3 && square[3] == '3')

            square[3] = mark;
        else if (choice == 4 && square[4] == '4')

            square[4] = mark;
        else if (choice == 5 && square[5] == '5')

            square[5] = mark;
        else if (choice == 6 && square[6] == '6')

            square[6] = mark;
        else if (choice == 7 && square[7] == '7')

            square[7] = mark;
        else if (choice == 8 && square[8] == '8')

            square[8] = mark;
        else if (choice == 9 && square[9] == '9')

            square[9] = mark;
        else
        {
            cout<<"Invalid move ";

            player--;
            cin.ignore();
            cin.get();
        }
        board();
        i=checkwin();
        player++;
    }while(i==-1);
    board();
    if(i==1)

        cout<<"==>\aPlayer "<<--player<<" win ";
    else
        cout<<"==>\aGame draw";

    cin.ignore();
    cin.get();
    return 0;
}

int checkwin()          //This function checks all the cases of winning the game; if none of these cases is true then it is draw
{
    if (square[1] == square[2] && square[2] == square[3])

        return 1;
    else if (square[4] == square[5] && square[5] == square[6])

        return 1;
    else if (square[7] == square[8] && square[8] == square[9])

        return 1;
    else if (square[1] == square[4] && square[4] == square[7])

        return 1;
    else if (square[2] == square[5] && square[5] == square[8])

        return 1;
    else if (square[3] == square[6] && square[6] == square[9])

        return 1;
    else if (square[1] == square[5] && square[5] == square[9])

        return 1;
    else if (square[3] == square[5] && square[5] == square[7])

        return 1;
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3'       //if it is none of the above this condition means
                    && square[4] != '4' && square[5] != '5' && square[6] != '6' //means it is a draw
                  && square[7] != '7' && square[8] != '8' && square[9] != '9')

        return 0;
    else
        return -1;
}

void board()        //This function is to draw and show the board and the details of the game on the screen
{
    system("CLS");
    cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl<<flush;
    cout << endl<<flush;

    cout << "     |     |     " << endl<<flush;
    cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl<<flush;

    cout << "_____|_____|_____" << endl<<flush;
    cout << "     |     |     " << endl<<flush;

    cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl<<flush;

    cout << "_____|_____|_____" << endl<<flush;
    cout << "     |     |     " << endl<<flush;

    cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl<<flush;

    cout << "     |     |     " << endl << endl<<flush;
}
