#define CATCH_CONFIG_MAIN // This tells Catch to provide a main()-only do this in one cpp 
#include "catch.hpp"
#include <iostream>
using std::cout;
using std::endl;



TEST_CASE( "Board is created", "[board]" ) 
{
	char numeralOne = 'I';
    REQUIRE( numeralOne == 'I');

}

