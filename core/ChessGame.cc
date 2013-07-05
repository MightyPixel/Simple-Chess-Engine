#include <iostream>

#include "ChessGame.hh"

using namespace std;


ChessGame::ChessGame(const Player& p1, const Player& p2)
{
    whitePlayer = &p1;
    blackPlayer = &p2;

    board = new ChessBoard();
}

void ChessGame::Information() const
{
    cout << "--Game--" << endl;
    cout << "White: " << *whitePlayer << endl;
    cout << "Black: " << *blackPlayer << endl;

    board->Information();
}

bool ChessGame::isGameOver() const
{    return isOver; }

void ChessGame::update()
{
    cout << "Enter the move in the format (e.g. g2-g4)"<< endl;
    if (moveCount%2 == 0)
        cout << whitePlayer->getName();
    else
        cout << blackPlayer->getName();

    cout << "'s move: ";
    char move[10];
    cin.getline(move, 10);

    board->movePiece(move[0], move[1], move[3], move[4]);

    // Parse input
    // Validate
    // Check for capture
    // Move Piece

    moveCount++;
}

ChessGame::~ChessGame()
{
    delete board;
}
