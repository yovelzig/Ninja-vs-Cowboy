#pragma once
#include "Ninja.hpp"
namespace ariel{
class TrainedNinja : public Ninja {

    public:
    TrainedNinja(string name,Point loc):Ninja(name,loc){
        this->setSpeed(12);
        this->setPoints(120);
    };
};
}