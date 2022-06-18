#pragma once

#include <string>
#include <stdexcept>
#include <vector>
#include <algorithm>

using namespace std;

namespace ariel{

    class Team{

        private:
            static vector<string> used_names;
            static int random_counter;

        public:
            Team();
            Team(string n, double skl);
            ~Team();

            string name;
            double skill_level;            
    };

}
