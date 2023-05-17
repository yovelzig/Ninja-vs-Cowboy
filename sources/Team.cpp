#include "Character.hpp"
#include "Team.hpp"
#include <vector>
using namespace std;

namespace ariel {
    
        Team ::Team(Character* leader){this->leader_ = leader;};
            void Team ::add(Character* c1){};
            void Team ::attack(Team* enemy){};
            int Team ::stillAlive(){return 0;};
            string Team ::print(){return "aa";};

    };

