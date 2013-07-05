#include "ChessPiece.hh"

ChessPiece::ChessPiece(const char* Name, Colour colour)
    : name(Name), colour(colour)
{

}

const char* ChessPiece::getName() const
{
    return name;
}

const char ChessPiece::getIcon() const
{   return name[0]; }
