#include "Knight.hh"

Knight::Knight(Colour colour)
    : ChessPiece("Knight", colour)
{

}

const char Knight::getIcon() const
{
    return 'N';
}
