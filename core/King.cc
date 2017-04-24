#include "King.hh"
#include <stdlib.h>


King::King(Colour colour, int Row, int Col)
    : ChessPiece("King", colour, Row, Col)
{

}

bool King::movePiece(int Row, int Col)
{
    bool isLegalMove = abs(this->row - Row) <= 1 && abs(this->col - Col) <= 1;

    if (isLegalMove) {
        this->row = Row;
        this->col = Col;
    }

    return isLegalMove;
}
