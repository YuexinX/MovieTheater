//
//  main.cpp
//  Project 5
//
//  Created by Time Thief on 8/1/22.
//

#include <iostream>
#include <string>
#include <cassert>
#include "MovieTicket.h"
#include "BoxOffice.h"
using namespace std;
bool boxOfficeNotMatchTicket(BoxOffice b, MovieTicket m);

int main()
{
    BoxOffice b1( "Westwood Boulevard", "Titanic" );
    BoxOffice b2( "Westwood Boulevard", "The Wizard of Oz" );
    BoxOffice b3( "Westwood Boulevard", "The Lake House" );

    MovieTicket m1( "Titanic", MovieTicket::Day::MONDAY, MovieTicket::Time::NOON,
                    MovieTicket::Kind::REGULAR, MovieTicket::Type::ADULT );
    MovieTicket m2( "The Wizard of Oz", MovieTicket::Day::MONDAY, MovieTicket::Time::NOON,
                    MovieTicket::Kind::REGULAR, MovieTicket::Type::CHILD );
    MovieTicket m3( "The Lake House", MovieTicket::Day::TUESDAY, MovieTicket::Time::SIXPM,
                    MovieTicket::Kind::BLOCKBUSTER, MovieTicket::Type::CHILD );

    // your coding problem is here...
    assert( boxOfficeNotMatchTicket( b1, m1 ) == false );
    assert( boxOfficeNotMatchTicket( b2, m2 ) == false );
    assert( boxOfficeNotMatchTicket( b3, m3 ) == false );
    // return true when the movie fields do not match
    assert( boxOfficeNotMatchTicket( b1, m2 ) == true );
    assert( boxOfficeNotMatchTicket( b2, m3 ) == true );
    assert( boxOfficeNotMatchTicket( b3, m1 ) == true );
    
    return 0;
}


bool boxOfficeNotMatchTicket(BoxOffice b, MovieTicket m)

{

string boxMovie = b.whatsPlaying();

string ticketMovie = m.getMovie();

return (boxMovie != ticketMovie);

}
