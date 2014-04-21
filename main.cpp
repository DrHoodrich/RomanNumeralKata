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
	int numberComparisons[]={50,40,10,9,5,4,1};
	string romantoNumberComparisons[]={"L","XL","X","IX","V","IV","I"};
	int numberToCompare = 0;
	while (numberToConvert > 0)
	{
		while (numberToConvert - numberComparisons[numberToCompare] >= 0)
		{
			numberToConvert -= numberComparisons[numberToCompare];
			convertedNumeral += romantoNumberComparisons[numberToCompare];
		}
		numberToCompare++;
	}
  
  return convertedNumeral;

}

TEST_CASE( "The roman numerals are converted", "[romanNumeral]" ) 
{
	string testRomanNumerals[] = {"Array Padding","I","II","III","IV","V","X","XXXV", "XL","L","XC"};
	int numbersToTest[] = {0,1,2,3,4,5,10,35,40,50,90};
	int numberOfTests = sizeof( testRomanNumerals ) / sizeof( testRomanNumerals[ 0 ] );

	for (int currentTest = 1; currentTest < numberOfTests; ++currentTest)
	{
    REQUIRE( numberToRomanNumeral(numbersToTest[currentTest]) == testRomanNumerals[currentTest]);
	}
}

