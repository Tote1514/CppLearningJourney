#ifndef PLAYLIST_H
#define PLAYLIST_H

#include <iostream>
#include <list>
#include <forward_list>
#include "song.h"


class Playlist{
friend std::ostream &operator<<(std::ostream &os, const Playlist &p);
private:
    std::string name;
    std::list<Song> songs;
    size_t number_of_songs;
    std::list<Song>::iterator current_song;

public:
    Playlist(std::string name);
    ~Playlist() = default;
    void add_song(Song &s);
    //void play();
    //void loop();
    //void shuffle();
    std::string get_name() const;
};

std::string Playlist::get_name() const{
    return name;
}

Playlist::Playlist(std::string name)
    : name{name} {
        number_of_songs = 0;
}

void Playlist::add_song(Song &s){
    songs.push_back(s);
    number_of_songs++;
}

std::ostream& operator<<(std::ostream &os, const Playlist &p){
    os << "The name of playlist is" << p.name << " and it has  " << p.number_of_songs << " songs";

    if (p.number_of_songs > 0)
    {
        os << "\n The songs are" << std::endl;
        for(auto &i : p.songs){
            os << i << std::endl;
        }
    }
    
    return os;
}

#endif // PLAYLIST_H