#include "Character.hpp"
#include "SmartTeam.hpp"
#include <vector>
using namespace std;

namespace ariel {
    
        SmartTeam ::SmartTeam(Character* leader){this->leader_ = leader;};
            void SmartTeam :: add(Character* c1){};
            void SmartTeam ::attack(Team* enemy){};
            int SmartTeam ::stillAlive(){return 0;};
            string SmartTeam ::print(){return "aa";};

    };

