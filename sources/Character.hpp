#pragma once
// #include <iostream>
#include <string>
#include "Point.hpp"
using namespace std;
namespace ariel{
class Character {

private:
    Point location;
    int hitPoint;
    string Name;
    bool alive;
public:

    // Constructor. Also works as a conversion from double and
    // also as a default ctor.
     Character(string name,Point loc);
     ~Character(); // Destructor
     double distance(Character* c1);
     void hit(int hit);
     virtual string print()const;
     Point getLocation(){
        return this->location;
     }
     string getName(){
        return this->Name;
     }
     bool isAlive(){
        return this->alive;
     }
     void setPoints(int hit){
        this->hitPoint = hit;
    }
    int getPoints(){
      return this->hitPoint;
    }
  };
}