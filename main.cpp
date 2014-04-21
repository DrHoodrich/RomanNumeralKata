#define CATCH_CONFIG_MAIN // This tells Catch to provide a main()-only do this in one cpp 
#include "catch.hpp"
#include <iostream>
using std::cout;
using std::endl;
using std::string;
using std::vector;

string numberToRomanNumeral (int numberToConvert)
{
	string convertedNumeral;

	while (numberToConvert >= 10)
	{
		numberToConvert-=10;
		convertedNumeral += string("X");
	}

	if (numberToConvert == 9)
	{
		numberToConvert++;
		convertedNumeral += string("I");
	}

	if (numberToConvert == 4)
	{
		numberToConvert++;
		convertedNumeral += string("I");
	}

	if (numberToConvert >= 5)
	{
		numberToConvert-=5;
		convertedNumeral += string("V");
	}

	while (numberToConvert > 0 && numberToConvert < 4 )
	{
		convertedNumeral = convertedNumeral + string("I");
		numberToConvert--;
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

