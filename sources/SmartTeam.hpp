#pragma once
#include "Character.hpp"
#include "Team.hpp"
#include <vector>
using namespace std;

namespace ariel {
    class SmartTeam {
        private:
            vector<Character*> characters;
            Character* leader_;

        public:
            SmartTeam(Character* leader);
            void add(Character* c1);
            void attack(Team* enemy);
            int stillAlive();
            string print();

            // Destructor to free allocated memory
            ~SmartTeam() {
                delete leader_;
                for (Character* c : characters) {
                    delete c;
                }
            }
    };
}
