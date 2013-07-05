#include "ChessPiece.hh"

ChessPiece::ChessPiece(const char* Name, Colour colour, int Row, int Col)
    : name(Name), colour(colour)
{
    row = Row;
    col = Col;
}

const char* ChessPiece::getName() const
{
    return name;
}

const char ChessPiece::getIcon() const
{   return name[0]; }


