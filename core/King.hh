#ifndef KING__HH
#define KING__HH

#include "ChessPiece.hh"

class King : public ChessPiece
{

public:
    King(Colour colour, int Row, int Col);

    virtual bool movePiece(int Row, int Col);
};


#endif
