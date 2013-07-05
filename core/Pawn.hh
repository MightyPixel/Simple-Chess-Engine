#ifndef PAWN__HH
#define PAWN__HH

#include "ChessPiece.hh"

class Pawn : public ChessPiece
{
public:
    Pawn(Colour colour, int Row, int Col);
    bool movePiece(int Row, int Col);

};


#endif
