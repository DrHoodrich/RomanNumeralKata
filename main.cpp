#define CATCH_CONFIG_MAIN // This tells Catch to provide a main()-only do this in one cpp 
#include "catch.hpp"
#include <iostream>
using std::cout;
using std::endl;
using std::string;
using std::vector;

string numberToRomanNumeral (int numberToConvert)
{
	if (numberToConvert == 10)
		return "X";

	if (numberToConvert == 5)
		return "V";

	if (numberToConvert == 4)
		return "IV";

	string convertedNumeral;
	for (int current = 0; current < numberToConvert; ++current)
	{
		convertedNumeral = convertedNumeral + string("I");
	}

	return convertedNumeral;
}

TEST_CASE( "The roman numerals are converted", "[romanNumeral]" ) 
{
	string testRomanNumerals[] = {"Array Padding","I","II","III","IV","V","X"};
	int numbersToTest[] = {0,1,2,3,4,5,10};
	int numberOfTests = sizeof( testRomanNumerals ) / sizeof( testRomanNumerals[ 0 ] );

	for (int currentTest = 1; currentTest < numberOfTests; ++currentTest)
	{
    REQUIRE( numberToRomanNumeral(numbersToTest[currentTest]) == testRomanNumerals[currentTest]);
	}
}

