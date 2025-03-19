#include <bits/stdc++.h>
#include <conio.h>
#include <thread>
#include <chrono>
using namespace std;
char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
char currentPlayer = 'X';
void resetBoard()
{
    board[0][0] = '1', board[0][1] = '2', board[0][2] = '3';
    board[1][0] = '4', board[1][1] = '5', board[1][2] = '6';
    board[2][0] = '7', board[2][1] = '8', board[2][2] = '9';
}
void playerMove()
{
    while (true)
    {
        cout << "Player " << currentPlayer << ", inter valid move between 1 to 9: ";
        char ch = _getch();

        if (ch >= '1' && ch <= '9')
        {
            int n = ch - '0';
            n--;
            int row = n / 3;
            int col = n % 3;
            if (board[row][col] >= '1' && board[row][col] <= '9')
            {
                board[row][col] = currentPlayer;
                break;
            }
            else
            {
                cout << "\nInvalid move. Try a valid move\n";
            }
        }
        else
        {
            cout << "\nInvalid move. Try a valid move\n";
        }
    }
}
void display()
{
    system("cls");
    cout << "\n\tT i c - T a c - T o e\n\n";
    cout << "\tPlayer 1: X" << endl;
    cout << "\tPlayer 2: O" << endl;
    cout << endl;
    cout << "\t\t" << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl;
    cout << "\t\t----------" << endl;
    cout << "\t\t" << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl;
    cout << "\t\t----------" << endl;
    cout << "\t\t" << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;
    cout << endl;
}
void switchPlayer()
{
    currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
}
bool isWin()
{
    for (int i = 0; i < 2; i++)
    {
        if (board[i][0] == board[i][1] && board[i][0] == board[i][2])
            return true;
        if (board[0][i] == board[1][i] && board[0][i] == board[2][i])
            return true;
    }
    if (board[0][0] == board[1][1] && board[0][0] == board[2][2])
        return true;
    if (board[2][0] == board[1][1] && board[1][1] == board[0][2])
        return true;
    return false;
}
bool isDraw()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] >= '1' && board[i][j] <= '9')
                return false;
        }
    }
    return true;
}
void playWithFriend()
{
    display();
    while (true)
    {
        playerMove();
        display();
        if (isWin())
        {
            cout << "Player " << currentPlayer << " wins!\n";
            break;
        }
        if (isDraw())
        {
            cout << "It's a draw!\n";
            break;
        }
        switchPlayer();
    }
}

int main()
{
    system("cls");

    while (true)
    {
        cout << "\n\tT i c - T a c - T o e\n\n";
        cout << "\tChoose game mood: " << endl;
        cout << "\t1. Play with friend" << endl;
        cout << "\t2. Play with computer" << endl;
        char gameMood = _getch();
        if (gameMood == '1')
        {
            playWithFriend();
            this_thread::sleep_for(chrono::seconds(5));
            system("cls");
            cout << "Press y to play again: ";
            char again = _getch();
            if (again == 'y' || again == 'Y')
            {
                resetBoard();
                system("cls");
                continue;
            }
            else
            {
                system("cls");
                cout << "Thank you for playing!" << endl;
                break;
            }
        }
        else if (gameMood == '2')
        {
            cout << "You are playing with computer" << endl;
            cout << "This mood is not ready yet!" << endl;
            cout << "Choose option 1 to play with friend" << endl;
        }
        else
        {
            system("cls");
            cout << "Choose your mood carefully again: ";
        }
    }

    return 0;
}