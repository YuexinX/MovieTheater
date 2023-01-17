//
//  BoxOffice.hpp
//  Project 5
//
//  Created by Time Thief on 8/1/22.
//

#ifndef BoxOffice_h
#define BoxOffice_h
#include "MovieTicket.h"
#include <string>
using namespace std;

class BoxOffice
{
public:
    BoxOffice(string address, string whatsPlaying);
    MovieTicket buyTicket(string movie, MovieTicket::Day day, MovieTicket::Time time, MovieTicket::Kind kind, MovieTicket::Type type);
   
    string getAddress();
    string whatsPlaying();
    
    int getWeekendTickets();
    int getWeekdayTickets();
    int getMatineeTickets();
    int getEveningTickets();
    
    double getRevenue();
    
private:
    string mAddress, mMovie;
    int mTicketcount;
    int mMatineeTickets, mEveningTickets;
    int mWeekdayTickets, mWeekendTickets;
    double mEarnedRevenue;
    
};

#endif /* BoxOffice_h */
