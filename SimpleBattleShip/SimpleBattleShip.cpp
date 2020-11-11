#include <iostream>
#include <cstdlib>
#include <ctime>

void makeEmptyBoard();
int randomRow();
void writeLetters();
void makeBoard(int numberOfShips);

const int M = 6;
const int N = 6;
void printBoard(char[][N]);


int main()
{
    std::cout << "Hello World!\n";
    makeEmptyBoard();
}

void makeEmptyBoard()
{
    char BLANK = NULL;
   
    char board[M][N];
    for (unsigned int i = 0; i < sizeof(board)/sizeof(board[i]); i++) {

        for (unsigned int j = 0; j < sizeof(board[i]) / sizeof(board[i][j]); j++) {



             board[i][j] << BLANK;


        }
        
    }
    
    printBoard(board);
}

int randomRow()
{
    int index;
    srand(std::time(0));
    index = (1 + rand() % 6);

    return index;
}

int randomColumn()
{
    int index;
    srand(std::time(0));
    index = (1 + rand() % 6);

    return index;
}

void writeLetters()
{
    std::cout << "| A | B | C | D | E | F |";
}

void makeBoard(int numberOfShips)
{
    const int SHIP[2] = { randomRow(), randomColumn() };

}



void printBoard(char board [][N])
{
    for (unsigned int i = 0; i < M; i++) {

        for (unsigned int j = 0; j < N; j++) {



            std::cout << board[i][j];
           


        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}