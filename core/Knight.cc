#include "Knight.hh"

Knight::Knight(Colour colour, int Row, int Col)
    : ChessPiece("Knight", colour, Row, Col)
{

}

const char Knight::getIcon() const
{
    return 'N';
}
