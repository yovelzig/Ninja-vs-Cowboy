#pragma once
#include "Character.hpp"
#include "Team.hpp"
#include <vector>
using namespace std;

namespace ariel {
    class team2 {
        private:
            vector<Character*> characters;
            Character* leader_;

        public:
            team2(Character* leader);
            void add(Character* c1);
            void attack(Team* enemy);
            int stillAlive();
            string print();

            // Destructor to free allocated memory
            ~team2() {
                delete leader_;
                for (Character* c : characters) {
                    delete c;
                }
            }
    };
}
