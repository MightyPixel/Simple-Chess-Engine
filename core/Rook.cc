#include "Rook.hh"
#include <stdlib.h>

Rook::Rook(Colour colour, int Row, int Col)
    : ChessPiece("Rook", colour, Row, Col)
{

}

bool Rook::movePiece(int Row, int Col)
{
    bool isLegalMove = this->row == Row
        || this->col == Col;

    if (isLegalMove) {
        this->row = Row;
        this->col = Col;
    }

    return isLegalMove;
}
