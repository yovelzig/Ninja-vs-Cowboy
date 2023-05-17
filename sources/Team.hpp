#pragma once
#include "Character.hpp"
#include "Cowboy.hpp"
#include "Ninja.hpp"
#include "TrainedNinja.hpp"
#include "YoungNinja.hpp"
#include "OldNinja.hpp"
#include "Point.hpp"
#include <vector>
using namespace std;

namespace ariel {
    class Team {
        private:
            vector<Character*> characters;
            Character* leader_;

        public:
            Team(Character* leader);
            void add(Character* c1);
            void attack(Team* enemy);
            int stillAlive();
            string print();
            int getSize(){
                return characters.size();
            }
            // Destructor to free allocated memory
            ~Team() {
                delete leader_;
                for (Character* c : characters) {
                    delete c;
                }
            }
    };
}
