#ifndef CHESS_PIECE__HH
#define CHESS_PIECE__HH

enum Colour
{
    BLACK,
    WHITE
};

class ChessPiece
{
    const char* name;

    int row, col;
    const Colour colour; // 0 - black; 1 - white
public:

    const char* getName() const;
    virtual const char getIcon() const;

    ChessPiece(const char* Name, Colour colour);

};

#endif
