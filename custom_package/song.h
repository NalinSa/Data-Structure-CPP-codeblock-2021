#ifndef __SONG_H__
#define __SONG_H__

#include <iostream>
#include <queue>
#include <string>
#include <vector>
#include "priority_queue.h"

using namespace std;

class Song {
  public:
    std::string artist,title;
    int count;

    Song() { }
    Song(const Song &s) : artist(s.artist), title(s.title), count(s.count) { }
    Song(std::string artist,std::string title,int count) :  artist(artist), title(title), count(count) { }

    friend std::ostream& operator<<(std::ostream &out,const Song &s) {
      return out << "Artist: " << s.artist << " Title: " << s.title << " count: " << s.count;
    }

};
class NameThenSong {
public:
    bool operator()(const Song& lhs, const Song& rhs) const{
        if(lhs.artist==rhs.artist){
            return lhs.title>rhs.title;
        }
        else{
            return lhs.artist>rhs.artist;
        }
    }
};
class SalethenName {
public:
    bool operator()(const Song& lhs, const Song& rhs) {
        if(lhs.count==rhs.count){
            if(lhs.artist==rhs.artist){
                return lhs.title>rhs.title;
            }
            else return lhs.artist>rhs.artist;
        }
        else{
            return lhs.count<rhs.count;
        }
    }
};

//  you have to write something below this line
//  you *MIGHT* have to change the declaration of pq1 and pq2
NameThenSong comp1;
SalethenName comp2;
CP::priority_queue<Song,NameThenSong> pq1(comp1);
CP::priority_queue<Song,SalethenName> pq2(comp2);

#endif
