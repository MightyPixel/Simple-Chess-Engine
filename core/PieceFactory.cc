#include "PieceFactory.hh"

ChessPiece* PieceFactory::createPiece(PIECES piece, Colour colour)
{
    ChessPiece *product;
    switch(piece)
    {
        case PIECE_KING:
            product = new King(colour);
            break;
        case PIECE_QUEEN:
            product = new Queen(colour);
            break;
        case PIECE_ROOK:
            product = new Rook(colour);
            break;
        case PIECE_BISHOP:
            product = new Bishop(colour);
            break;
        case PIECE_KNIGHT:
            product = new Knight(colour);
            break;
        case PIECE_PAWN:
            product = new Pawn(colour);
            break;
    }

    return product;
}
