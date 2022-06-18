#include <string.h>
#include <set>

#include "Team.hpp"

namespace ariel{

    class Leauge{

        private:
        public:
            std::set<Team*> lg_teams;
            Leauge(std::set<Team*> teams); // if less then 20, randomize
            Leauge(); // randomize 20 teams

    };
}



