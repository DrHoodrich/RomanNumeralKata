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
	int numberComparisons[]={500,400,100,90,50,40,10,9,5,4,1};
	string romantoNumberComparisons[]={"D","CD","C","XC","L","XL","X","IX","V","IV","I"};
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
	string testRomanNumerals[] = {"Array Padding","I","II","III","IV","V","X","XXXV", "XL","L","XC","C","CD","D","DXXXVII"};
	int numbersToTest[] = {0,1,2,3,4,5,10,35,40,50,90,100,400,500,537};
	int numberOfTests = sizeof( testRomanNumerals ) / sizeof( testRomanNumerals[ 0 ] );

	for (int currentTest = 1; currentTest < numberOfTests; ++currentTest)
	{
    REQUIRE( numberToRomanNumeral(numbersToTest[currentTest]) == testRomanNumerals[currentTest]);
	}
}

