#include <string.h>

namespace ariel{

    class Game{

        private:
        public:
            Team home_team;
            Team out_team;
            double score;

            Team* decide_in_teko(game& g);
    };
}
