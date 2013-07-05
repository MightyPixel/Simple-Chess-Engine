#ifndef CHESS_BOARD__HH
#define CHESS_BOARD__HH

#include "ChessPiece.hh"
#include "PieceFactory.hh"

class ChessBoard
{
    ChessPiece* field[8][8];
public:

    ChessBoard();
    ~ChessBoard();

    void Information();

};

#endif
