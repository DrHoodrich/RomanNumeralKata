#define CATCH_CONFIG_MAIN // This tells Catch to provide a main()-only do this in one cpp 
#include "catch.hpp"
#include <iostream>
using std::cout;
using std::endl;

char numberToRomanNumeral ()
{
		return ('I');
}

TEST_CASE( "The roman numerals are converted", "[romanNumeral]" ) 
{
    REQUIRE( numberToRomanNumeral() == 'I');
}

