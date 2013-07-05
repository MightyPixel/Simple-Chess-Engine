#ifndef PIECE_FACTORY__HH
#define PIECE_FACTORY__HH

#include "ChessPiece.hh"
#include "King.hh"
#include "Queen.hh"
#include "Rook.hh"
#include "Bishop.hh"
#include "Knight.hh"
#include "Pawn.hh"

enum PIECES
{
    PIECE_KING,
    PIECE_QUEEN,
    PIECE_ROOK,
    PIECE_BISHOP,
    PIECE_KNIGHT,
    PIECE_PAWN
};


class PieceFactory
{
    PieceFactory() {}
public:

    static ChessPiece* createPiece(PIECES piece, Colour colour, int Row, int Col);
};

#endif
