#ifndef KNIGH__HH
#define KNIGH__HH

#include "ChessPiece.hh"

class Knight : public ChessPiece
{
public:
    Knight(Colour colour);
    const char getIcon() const;

};


#endif
