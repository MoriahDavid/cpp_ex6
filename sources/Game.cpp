#include "Game.hpp"
#include "Team.hpp"
#include <random>

using namespace std;

namespace ariel{
    
    Team* Game::winner(){ // also teco
        if(this->score_home > this->score_out){
            return &(this->home_team);
        }
        else{
            return &(this->out_team);
        }
    }
    
    void Game::random_result(){

        random_device rd;
        mt19937 rng(rd());

        uniform_int_distribution<int> uni(min_score_home, max_score);
        this->score_home = uni(rng);

        uniform_int_distribution<int> uni2(min_score_out, max_score);
        this->score_out = uni2(rng);

        this->score_home += this->home_team.skill_level * 10;
        this->score_out += this->out_team.skill_level * 10;
    }

}