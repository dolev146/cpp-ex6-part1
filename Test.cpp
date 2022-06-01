#include "doctest.h"
#include "Game.cpp"

/**
 * @brief Demo program for TEAM exercise.
 *  @author DOLEV DUBLON
 * 
 */
TEST_CASE("TEAM test check no throw")
{
    CHECK_NOTHROW(1);
    CHECK_NOTHROW(Game());
    
}