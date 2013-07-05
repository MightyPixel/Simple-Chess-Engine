#ifndef CHESS_GAME__HH
#define CHESS_GAME__HH

#include "Player.hh"
#include "ChessBoard.hh"

class ChessGame
{
    Player const * whitePlayer;
    Player const * blackPlayer;

    ChessBoard* board;
    bool isOver;
    int moveCount;
public:
    ChessGame(const Player& p1, const Player& p2);
    ~ChessGame();

    void Information() const;
    bool isGameOver() const;

    void update();

};

#endif
