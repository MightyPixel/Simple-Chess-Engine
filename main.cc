#include<iostream>

#include "core/Player.hh"
#include "core/ChessGame.hh"

using namespace std;

int main()
{

    cout << "Welcome to Simple Chess!" << endl;

    Player *p1 = new Player("James");
    Player *p2 = new Player("Wilson");

    cout << "Player1: " << p1->getName() << endl;
    cout << "Player2: " << p2->getName() << endl;

    ChessGame *game = new ChessGame(*p1, *p2);
    game->Information();

    game->update();
    game->update();

    delete p1;
    delete p2;
    delete game;


    return 0;
}
