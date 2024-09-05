#include <iostream>
#include <cstdlib>

void InitializeBoard();
int DeterminingOutcome();

char Board[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

int main()
{
    int currentPlayer = 1;
    int gameOutcome = -1;
    int cellNumberToChange;
    char playInput;

    do
    {
        InitializeBoard();
        currentPlayer = (currentPlayer % 2) ? 1 : 2;
        std::cout << "Player " << currentPlayer << ", enter a number: ";
        std::cin >> cellNumberToChange;

        playInput = (currentPlayer == 1) ? 'X' : 'O';

        if (cellNumberToChange == 1 && Board[1] == '1')
        {
            Board[1] = playInput;
        }
        else if (cellNumberToChange == 2 && Board[2] == '2')
        {
            Board[2] = playInput;
        }
        else if (cellNumberToChange == 3 && Board[3] == '3')
        {
            Board[3] = playInput;
        }
        else if (cellNumberToChange == 4 && Board[4] == '4')
        {
            Board[4] = playInput;
        }
        else if (cellNumberToChange == 5 && Board[5] == '5')
        {
            Board[5] = playInput;
        }
        else if (cellNumberToChange == 6 && Board[6] == '6')
        {
            Board[6] = playInput;
        }
        else if (cellNumberToChange == 7 && Board[7] == '7')
        {
            Board[7] = playInput;
        }
        else if (cellNumberToChange == 8 && Board[8] == '8')
        {
            Board[8] = playInput;
        }
        else if (cellNumberToChange == 9 && Board[9] == '9')
        {
            Board[9] = playInput;
        }
        else
        {
            std::cout << "INVALID MOVE!!! ";
            currentPlayer--;
            std::cin.ignore();
            std::cin.get();
        }

        gameOutcome = DeterminingOutcome();
        currentPlayer++;
    } while (gameOutcome == -1);

    InitializeBoard();

    if (gameOutcome == 1)
    {
        std::cout << "\aPlayer " << --currentPlayer << " won the game!";
    }
    else
    {
        std::cout << "\aGame is a draw!";
    }
    std::cin.ignore();
    std::cin.get();
    return 0;
}

void InitializeBoard()
{
    std::system("cls");

    std::cout << "\n\n\tTic-Tac-Toe 2-Player \n\n";
    std::cout << "Player 1 plays as X\n";
    std::cout << "Player 2 plays as O\n\n\n";

    std::cout << "   |   |   |\n";
    std::cout << " " << Board[1] << " | " << Board[2] << " | " << Board[3] << " |\n";

    std::cout << "___|___|___|\n";
    std::cout << "   |   |   |\n";

    std::cout << " " << Board[4] << " | " << Board[5] << " | " << Board[6] << " |\n";

    std::cout << "___|___|___|\n";
    std::cout << "   |   |   |\n";

    std::cout << " " << Board[7] << " | " << Board[8] << " | " << Board[9] << " |\n";

    std::cout << "   |   |   |\n";
}

int DeterminingOutcome()
{
    if (Board[1] == Board[2] && Board[2] == Board[3])
    {
        return 1;
    }
    else if (Board[4] == Board[5] && Board[5] == Board[6])
    {
        return 1;
    }
    else if (Board[7] == Board[8] && Board[8] == Board[9])
    {
        return 1;
    }
    else if (Board[1] == Board[4] && Board[4] == Board[7])
    {
        return 1;
    }
    else if (Board[2] == Board[5] && Board[5] == Board[8])
    {
        return 1;
    }
    else if (Board[3] == Board[6] && Board[6] == Board[9])
    {
        return 1;
    }
    else if (Board[1] == Board[5] && Board[5] == Board[9])
    {
        return 1;
    }
    else if (Board[3] == Board[5] && Board[5] == Board[7])
    {
        return 1;
    }
    else if (Board[1] != '1' && Board[2] != '2' && Board[3] != '3' && Board[4] != '4' && Board[5] != '5' && Board[6] != '6'
             && Board[7] != '7' && Board[8] != '8' && Board[9] != '9')
    {
        return 0;
    }
    else
    {
        return -1;
    }
}
