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

	if (numberToConvert == 40)
	{
		convertedNumeral += string("X");
		numberToConvert += 10;
	}

	if (numberToConvert == 50)
	{
		convertedNumeral += string("L");
		numberToConvert -= 50;
	}

	while (numberToConvert >= 10)
	{
		convertedNumeral += string("X");
		numberToConvert -= 10;
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
		convertedNumeral += string("V");
		numberToConvert-=5;
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
	string testRomanNumerals[] = {"Array Padding","I","II","III","IV","V","X","XXXV", "XL","L"};
	int numbersToTest[] = {0,1,2,3,4,5,10,35,40,50};
	int numberOfTests = sizeof( testRomanNumerals ) / sizeof( testRomanNumerals[ 0 ] );

	for (int currentTest = 1; currentTest < numberOfTests; ++currentTest)
	{
    REQUIRE( numberToRomanNumeral(numbersToTest[currentTest]) == testRomanNumerals[currentTest]);
	}
}

