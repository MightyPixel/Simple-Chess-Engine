#include "Knight.hh"
#include <stdlib.h>

Knight::Knight(Colour colour, int Row, int Col)
    : ChessPiece("Knight", colour, Row, Col)
{

}

char Knight::getIcon() const
{
    return 'N';
}

bool Knight::movePiece(int Row, int Col)
{
    int dx = abs(this->col - Col);
    int dy = abs(this->row - Row);

    bool isLegalMove = (dx == 1 && dy == 2) || (dx == 2 && dx == 1);

    if (isLegalMove) {
        this->col = Col;
        this->row = Row;
    }

    return isLegalMove;
}
