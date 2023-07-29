#include "player.h"
#include <iostream>


Player::Player(string m_game, string first_name_param, string last_name_param)
    :m_game(m_game)
{
    first_name = first_name_param;
    last_name = last_name_param;
}

Player::~Player()
{
    cout << "this player died" << endl;
}

string Player::get_m_game(){

    return this->m_game; 
}
// Definition of the friend function
ostream& operator <<(ostream& out, const Player& player){
    out << "My name is " << player.first_name
    << " and my favorite game is " << player.m_game;
    return out;
}

