#ifndef CHESS_PIECE__HH
#define CHESS_PIECE__HH

enum Colour
{
    BLACK,
    WHITE
};

class ChessPiece
{
protected:
    const char* name;

    int row, col;
    const Colour colour; // 0 - black; 1 - white
public:
     ChessPiece(const char* Name, Colour colour, int Row, int Col);

    const char* getName() const;
    virtual const char getIcon() const;

    virtual bool movePiece(int Row, int Col) = 0;

};

#endif
