//
//  MovieTicket.cpp
//  Project 5
//
//  Created by Time Thief on 8/1/22.
//

#include "MovieTicket.h"
#include <iostream>
#include <string>
using namespace std;

MovieTicket::MovieTicket(string movie, MovieTicket::Day day, MovieTicket::Time time, MovieTicket::Kind kind, MovieTicket::Type type)
{
    mMovie = movie;
    mDay = day;
    mTime = time;
    mKind = kind;
    mType = type;
}

string MovieTicket::getMovie()
{
    return mMovie;
}

MovieTicket::Day MovieTicket::getDay()
{
    return mDay;
}

MovieTicket::Time MovieTicket::getTime()
{
    return mTime;
}

MovieTicket::Kind MovieTicket::getKind()
{
    return mKind;
}

MovieTicket::Type MovieTicket::getType()
{
    return mType;
}

bool MovieTicket::isWeekendTicket()
{
    switch (mDay)
    {
        case FRIDAY:
        case SATURDAY:
        case SUNDAY:
            return true;
            break;
        default:
            return false;
    }
}

bool MovieTicket::isWeekdayTicket()
{
    switch (mDay)
    {
        case FRIDAY:
        case SATURDAY:
        case SUNDAY:
            return false;
            break;
        default:
            return true;
    }
}

bool MovieTicket::isMatineeTicket()
{
    switch (mTime)
    {
        case NOON:
        case TWOPM:
        case FOURPM:
            return true;
            break;
        default:
            return false;
    }
}

bool MovieTicket::isEveningTicket()
{
    switch (mTime)
    {
        case NOON:
        case TWOPM:
        case FOURPM:
            return false;
            break;
        default:
            return true;
    }
}

double MovieTicket::getCost()
{
    double type_price = 0;
    double time_price = 0;
    double kind_price = 0;
    double total = 0;
    switch(mType)
    {
        case CHILD:
            type_price = 3.50;
            break;
        case ADULT:
            type_price = 7.50;
            break;
        case SENIOR:
            type_price = 4.50;
            break;
    }
    switch(mKind)
    {
        case BLOCKBUSTER:
            kind_price = 1.00;
            break;
        case GRANDOPENING:
            kind_price = 2.00;
            break;
        case BOMB:
            kind_price = -1.00;
            break;
        default:
            kind_price = 0;
    }
    if (isMatineeTicket())
        time_price = -2;
    total = type_price + time_price + kind_price;
    return total;
}
