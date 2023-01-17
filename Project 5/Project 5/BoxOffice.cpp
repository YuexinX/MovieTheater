//
//  BoxOffice.cpp
//  Project 5
//
//  Created by Time Thief on 8/1/22.
//

#include "BoxOffice.h"
#include "MovieTicket.h"
#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

BoxOffice::BoxOffice(string address, string whatsPlaying)
{
    mAddress = address;
    mMovie = whatsPlaying;
    mMatineeTickets = 0;
    mEveningTickets = 0;
    mWeekdayTickets = 0;
    mWeekendTickets = 0;
}

string BoxOffice::getAddress()
{
    return mAddress;
}

string BoxOffice::whatsPlaying()
{
    return mMovie;
}

MovieTicket BoxOffice::buyTicket(string movie, MovieTicket::Day day, MovieTicket::Time time, MovieTicket::Kind kind, MovieTicket::Type type)
{
    if(movie != mMovie)
    {
        logic_error nM("The movie bought is not the movie played");
        throw (nM);
    }
    else
    {
        MovieTicket t(movie, day, time, kind, type);
        if (t.isWeekdayTicket())
            mWeekdayTickets ++;
        else
            mWeekendTickets ++;
        if (t.isMatineeTicket())
            mMatineeTickets ++;
        else
            mEveningTickets ++;
        mEarnedRevenue = mEarnedRevenue + t.getCost();
        return t;
    }
    
}

int BoxOffice::getWeekdayTickets()
{
    return mWeekdayTickets;
}

int BoxOffice::getWeekendTickets()
{
    return mWeekendTickets;
}

int BoxOffice::getMatineeTickets()
{
    return mMatineeTickets;
}

int BoxOffice::getEveningTickets()
{
    return mEveningTickets;
}

double BoxOffice::getRevenue()
{
    return mEarnedRevenue;
}
