#include "Team.hpp"
#include <random>
#include <string>

using namespace std;

namespace ariel{
    vector<string> Team::used_names;

    Team::Team(){

        random_device rd;
        mt19937 rng(rd());

        uniform_int_distribution<double> uni(0.0, 1.0);
        this->skill_level = uni(rng);

        this->name = "Team-";
        this->name += random_counter++;
        
        used_names.push_back(this->name);

    }
    Team::Team(string n, double skl){
        if(skl >= 0 && skl <= 1){
            this->skill_level = skl;
        }
        else{
            throw invalid_argument("not valid skill level");
        }
        // Check that the name never used before
        if(find(used_names.begin(), used_names.end(), n) == used_names.end()){
            this->name = n;
            used_names.push_back(n);
        }
        else{
            throw invalid_argument("name already used.");
        }
    }
    Team::~Team(){
        remove(used_names.begin(), used_names.end(), this->name);
    }
    
}