#include "Bishop.hh"
#include <stdlib.h>

Bishop::Bishop(Colour colour, int Row, int Col)
    : ChessPiece("Bishop", colour, Row, Col)
{

}


bool Bishop::movePiece(int Row, int Col)
{
    bool isLegalMove = abs(this->row - Row) == abs(this->col - Col);

    if (isLegalMove) {
        this->row = Row;
        this->col = Col;
    }

    return isLegalMove;
}
