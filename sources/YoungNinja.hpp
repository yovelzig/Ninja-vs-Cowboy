#pragma once
#include "Ninja.hpp"
namespace ariel{
class YoungNinja : public Ninja {
 
    public:
    YoungNinja(string name,Point loc):Ninja(name,loc){
        this->setSpeed(14);
        this->setPoints(100);
    };
};
}