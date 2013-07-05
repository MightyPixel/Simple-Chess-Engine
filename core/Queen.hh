#ifndef QUEEN__HH
#define QUEEN__HH

#include "ChessPiece.hh"

class Queen : public ChessPiece
{
public:
    Queen(Colour colour, int Row, int Col);
};


#endif
