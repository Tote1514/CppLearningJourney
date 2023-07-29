#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include "person.h"
#include <string>


class Player:public Person
{
    friend ostream& operator <<(ostream& out, const Player& player);
private:
    string m_game = "FIFA";
public:
    Player() = default;
    Player(string m_game, string first_name_param, string last_name_param);
    ~Player();
    string get_m_game();
};

#endif
