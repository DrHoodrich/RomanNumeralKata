#define CATCH_CONFIG_MAIN // This tells Catch to provide a main()-only do this in one cpp 
#include "catch.hpp"
#include <iostream>
using std::cout;
using std::endl;
using std::string;

string numberToRomanNumeral (int numberToConvert)
{
	string convertedNumeral;
	for (int current = 0; current < numberToConvert; ++current)
	{
		convertedNumeral = convertedNumeral + string("I");
	}

	return convertedNumeral;
}

TEST_CASE( "The roman numerals are converted", "[romanNumeral]" ) 
{

    REQUIRE( numberToRomanNumeral(1) == "I");
	REQUIRE( numberToRomanNumeral(2) == "II");
	REQUIRE( numberToRomanNumeral(3) == "III");
	REQUIRE( numberToRomanNumeral(4) == "IV");
}

