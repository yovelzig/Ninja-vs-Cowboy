#pragma once
#include "Character.hpp"
namespace ariel{
class Ninja : public Character {
    private:
    int speed;

    public:
    Ninja(string name,Point loc):Character(name,loc){};
    void move(Character* c1);
    void slash(Character* c1);
    string print()const;
    void setSpeed(int speed){
        this->speed = speed;
    }
    
};
}

