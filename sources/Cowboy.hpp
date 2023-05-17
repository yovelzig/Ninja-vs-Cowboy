#pragma once
#include "Character.hpp"
namespace ariel{
class Cowboy : public Character {
    private:
    int bulletAmount;

    public:
    Cowboy(string name,Point loc):Character(name , loc), bulletAmount(6){
        this->setPoints(110);
    };
    bool hasbullets(){
        if (bulletAmount == 0)
        {
            return false;
        }
        return true;  
    }
    void shoot(Character* c1);
    void reload();
    string print()const;
    
};
}

