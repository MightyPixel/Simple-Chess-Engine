#include <iostream>

#include "ChessBoard.hh"

using namespace std;


#define BOTTOM_ROW 0
#define TOP_ROW 7

ChessBoard::ChessBoard()
{
    field[BOTTOM_ROW][0] = PieceFactory::createPiece(PIECE_ROOK, WHITE, BOTTOM_ROW, 0);
    field[BOTTOM_ROW][1] = PieceFactory::createPiece(PIECE_KNIGHT, WHITE, BOTTOM_ROW, 1);
    field[BOTTOM_ROW][2] = PieceFactory::createPiece(PIECE_BISHOP, WHITE, BOTTOM_ROW, 2);
    field[BOTTOM_ROW][3] = PieceFactory::createPiece(PIECE_QUEEN, WHITE, BOTTOM_ROW, 3);
    field[BOTTOM_ROW][4] = PieceFactory::createPiece(PIECE_KING, WHITE, BOTTOM_ROW, 4);
    field[BOTTOM_ROW][5] = PieceFactory::createPiece(PIECE_BISHOP, WHITE, BOTTOM_ROW, 5);
    field[BOTTOM_ROW][6] = PieceFactory::createPiece(PIECE_KNIGHT, WHITE, BOTTOM_ROW, 6);
    field[BOTTOM_ROW][7] = PieceFactory::createPiece(PIECE_ROOK, WHITE, BOTTOM_ROW, 7);

    field[TOP_ROW][0] = PieceFactory::createPiece(PIECE_ROOK, WHITE, TOP_ROW, 0);
    field[TOP_ROW][1] = PieceFactory::createPiece(PIECE_KNIGHT, WHITE, TOP_ROW, 1);
    field[TOP_ROW][2] = PieceFactory::createPiece(PIECE_BISHOP, WHITE, TOP_ROW, 2);
    field[TOP_ROW][3] = PieceFactory::createPiece(PIECE_QUEEN, WHITE, TOP_ROW, 3);
    field[TOP_ROW][4] = PieceFactory::createPiece(PIECE_KING, WHITE, TOP_ROW, 4);
    field[TOP_ROW][5] = PieceFactory::createPiece(PIECE_BISHOP, WHITE, TOP_ROW, 5);
    field[TOP_ROW][6] = PieceFactory::createPiece(PIECE_KNIGHT, WHITE, TOP_ROW, 6);
    field[TOP_ROW][7] = PieceFactory::createPiece(PIECE_ROOK, WHITE, TOP_ROW, 7);


    for (int i = 0; i < 8; i ++)
    {
        field[BOTTOM_ROW + 1][i] = PieceFactory::createPiece(PIECE_PAWN, WHITE,
                                                             BOTTOM_ROW+1, i);
        field[TOP_ROW - 1][i] = PieceFactory::createPiece(PIECE_PAWN, WHITE, TOP_ROW+1, i);
    }
}

ChessBoard::~ChessBoard()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            delete field[i][j];
        }
    }
}


void ChessBoard::Information()
{
    for(int i = 0; i < 8; i++)
    {
        cout << 8 - i << " | ";
        for(int j = 0; j < 8; j++)
        {
            if (field[i][j])
                cout << field[i][j]->getIcon() << " | ";
            else
                cout << "0 | ";
        }
        cout << endl;
    }
    cout << "-----------------------------------" << endl;
    cout << "+ | ";
    for (int i = 0; i < 8; i++)
    {
        cout << (char)('a' + i) << " | ";
    }
    cout << endl;
}

bool ChessBoard::movePiece(char fromFile, int fromRow, char toFile, int toRow)
{
    int fromCol = fromFile - (int)'a';
    cout << fromCol << endl;
    int toCol = toFile - (int)'a';
    cout << toCol << endl;
    fromRow -= (int)'1';
    toRow -= (int)'1';
    if (field[fromRow][fromCol] && !field[toRow][toCol])
    {
        cout << "Valid" << endl;
        cout << "Legal?" << field[fromRow][fromCol]->movePiece(toRow, toCol) << endl;
        return true;
    }
    cout << "Not valid" << endl;
    return false;
}

