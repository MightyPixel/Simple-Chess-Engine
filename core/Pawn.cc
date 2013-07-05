#include <iostream>

#include "Pawn.hh"

using namespace std;

Pawn::Pawn(Colour colour, int Row, int Col)
    : ChessPiece("Pawn", colour, Row, Col)
{

}

bool Pawn::movePiece(int Row, int Col)
{
    cout << "IN" << endl;
    if (row == Row + 1 && col == Col )
        return 1;
    else
        return 0;
}
