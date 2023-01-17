//
//  MovieTicket.hpp
//  Project 5
//
//  Created by Time Thief on 8/1/22.
//

#ifndef MovieTicket_h
#define MovieTicket_h

#include <string>
using namespace std;

class MovieTicket
{
public:
    enum Time{NOON, TWOPM, FOURPM, SIXPM, EIGHTPM, TENPM, MIDNIGHT};
    enum Day{MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY};
    enum Type{CHILD, ADULT, SENIOR};
    enum Kind{GRANDOPENING, BLOCKBUSTER, REGULAR, BOMB};
   
    MovieTicket(string movie, Day day,Time time, Kind kind, Type type);
    
    string getMovie();
    Day getDay();
    Time getTime();
    Kind getKind();
    Type getType();
    
    bool isWeekendTicket();
    bool isWeekdayTicket();
    bool isMatineeTicket();
    bool isEveningTicket();
    
    double getCost();
    
    
private:
    string mMovie;
    Day mDay;
    Time mTime;
    Kind mKind;
    Type mType;
    
};


#endif /* MovieTicket_h */
