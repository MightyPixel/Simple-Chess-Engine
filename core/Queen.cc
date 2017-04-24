#include "Queen.hh"
#include <stdlib.h>

Queen::Queen(Colour colour, int Row, int Col)
    : ChessPiece("Queen", colour, Row, Col)
{

}

bool Queen::movePiece(int Row, int Col)
{
    bool isRookMove = this->row == Row
        || this->col == Col;

    bool isBishopMove = abs(this->row - Row) == abs(this->col - Col);
    bool isLegalMove = isRookMove || isBishopMove;

    if (isLegalMove) {
        this->row = Row;
        this->col = Col;
    }

    return isLegalMove;
}
