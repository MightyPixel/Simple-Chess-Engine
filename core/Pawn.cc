#include "Pawn.hh"

Pawn::Pawn(Colour colour)
    : ChessPiece("Pawn", colour)
{

}

bool Pawn::movePiece(int Row, int Col)
{
    if (row == Row + 1 && col == Col )
        return 1;
    else
        return 0;
}
