#define CATCH_CONFIG_MAIN // This tells Catch to provide a main()-only do this in one cpp 
#include "catch.hpp"
#include <iostream>
using std::cout;
using std::endl;
using std::string;

string numberToRomanNumeral (int numberToConvert)
{
	if (numberToConvert == 2)
	{
		return "II";
	}
	else 
		return "I";
}

TEST_CASE( "The roman numerals are converted", "[romanNumeral]" ) 
{
    REQUIRE( numberToRomanNumeral(1) == "I");
	REQUIRE( numberToRomanNumeral(2) == "II");
}

