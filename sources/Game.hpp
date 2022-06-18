#pragma once

#include <string.h>
#include "Team.hpp"


namespace ariel{

    const int min_score_home = 55;
    const int min_score_out = 50;
    const int max_score = 100;
    
    class Game{

        private:
        public:
            Team home_team;
            Team out_team;
            double score_home, score_out;

            Team* winner(); // also teco

            void random_result();
    };
}
