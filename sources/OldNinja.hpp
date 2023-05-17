#pragma once
#include "Ninja.hpp"
namespace ariel{
class OldNinja : public Ninja {

    public:
    OldNinja(string name,Point loc):Ninja(name,loc){
        this->setSpeed(8);
        this->setPoints(150);
    };
};
}