#include<iostream>

#include "core/Player.hh"
#include "core/ChessGame.hh"
#include <memory>

using namespace std;

int main()
{
    cout << "Welcome to Simple Chess!" << endl;

    std::unique_ptr<Player> p1(new Player("James"));
    std::unique_ptr<Player> p2(new Player("Wilson"));

    cout << "Player1: " << p1->getName() << endl;
    cout << "Player2: " << p2->getName() << endl;

    ChessGame* game = new ChessGame(*p1, *p2);
    game->Information();

    game->update();
    game->Information();

    game->update();
    game->Information();

    delete game;


    return 0;
}
