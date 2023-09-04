#ifndef SONG_H
#define SONG_H

#include <iostream>

class Song
{
    friend std::ostream &operator<<(std::ostream &os, const Song &s);
private:
    std::string name;
    std::string artist;
public:
    Song() = default;
    ~Song() = default;
    Song(std::string name, std::string artist);
    std::string get_name() const;
    std::string get_artist() const;
};

Song::Song(std::string name, std::string artist)
    : name{name}, artist{artist} {
}

std::string Song::get_name() const {
    return name;
}

std::string Song::get_artist() const {
    return artist;
}

std::ostream& operator<<(std::ostream &os, const Song &s){
    os << s.name << " by " << s.artist;
    return os;
}

#endif // SONG_H