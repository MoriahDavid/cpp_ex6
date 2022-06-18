#include "doctest.h"
#include <iostream>
#include <string>
#include <stdexcept>
#include <vector>

#include "Team.hpp"

using namespace ariel;

TEST_CASE("good inputs"){

    CHECK_NOTHROW(Team t1("t1", 0.2));
    CHECK_THROWS(Team t2("t1", 0.2));

}




TEST_CASE("bad inputs"){

  
}    