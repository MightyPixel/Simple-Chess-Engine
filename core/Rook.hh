#ifndef ROOK__HH
#define ROOK__HH

#include "ChessPiece.hh"

class Rook : public ChessPiece
{
public:
    Rook(Colour colour, int Row, int Col);

    virtual bool movePiece(int Row, int Col);
};


#endif
