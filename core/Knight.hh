#ifndef KNIGH__HH
#define KNIGH__HH

#include "ChessPiece.hh"

class Knight : public ChessPiece
{
public:
    Knight(Colour colour, int Row, int Col);
    char getIcon() const;

    virtual bool movePiece(int Row, int Col);

};


#endif
