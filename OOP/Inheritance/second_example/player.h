#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
#include "person.h"

class Player: private Person
{
    friend ostream& operator<<(ostream& out, const Player& gamer);
private:
    string game = "Rocket league";
public:
    Player(/* args */);
    ~Player();
    void play(){
        fullname = "Mario"; // ok because is a private member of the derived class
        age = 27;// ok because is a private member of the derived class
        //address = "Castle";  compiler error because the member is private to the base class
    }
};

Player::Player(/* args */)
{
}

Player::~Player()
{
}

ostream& operator<<(ostream& out, const Player& gamer){
    out << "My name is "<< gamer.get_fullname() << ", I am "
        << gamer.get_age() << " years old, I live in " << gamer.get_address()
        << ", I am a gamer and my favorite game is " << gamer.game;
    return out;
}
#endif