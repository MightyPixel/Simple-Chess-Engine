#include "PieceFactory.hh"

ChessPiece* PieceFactory::createPiece(PIECES piece, Colour colour, int Row, int Col)
{
    ChessPiece *product;
    switch(piece)
    {
        case PIECE_KING:
            product = new King(colour, Row, Col);
            break;
        case PIECE_QUEEN:
            product = new Queen(colour, Row, Col);
            break;
        case PIECE_ROOK:
            product = new Rook(colour, Row, Col);
            break;
        case PIECE_BISHOP:
            product = new Bishop(colour, Row, Col);
            break;
        case PIECE_KNIGHT:
            product = new Knight(colour, Row, Col);
            break;
        case PIECE_PAWN:
            product = new Pawn(colour, Row, Col);
            break;
    }

    return product;
}
