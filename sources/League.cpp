#include "Leauge.hpp"
#include <random>
#include <stdexcept>

using namespace std;

namespace ariel{
    Leauge::Leauge(){
        for(int i=0; i < 20; i++){
            this->lg_teams.insert(new Team);
        }
    }
    Leauge::Leauge(set<Team*> teams){
        int s = teams.size();
        if(s > 20){
            throw invalid_argument("max 20 teams.");
        }
        if(s <= 20){
            this->lg_teams = teams;
            // randomize
            for(int i=0; i < 20 - s; i++){
                this->lg_teams.insert(new Team);
            }
        }
    }
}