#include <iostream>

#include "ChessGame.hh"

using namespace std;



ChessGame::ChessGame(const Player& p1, const Player& p2)
{
    whitePlayer = &p1;
    blackPLayer = &p2;

    board = new ChessBoard();
}

void ChessGame::Information() const
{
    cout << "--Game--" << endl;
    cout << "White: " << *whitePlayer << endl;
    cout << "Black: " << *blackPLayer << endl;

    board->Information();
}

ChessGame::~ChessGame()
{
    delete board;
}
