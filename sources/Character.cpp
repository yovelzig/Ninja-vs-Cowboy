#include "Character.hpp"
#include <iostream>
#include <string>
using namespace std;
namespace ariel{
     Character::Character(string name,Point loc):location(loc){
        this->location = loc;
        this->Name = name;
     };
       Character::~Character() {
        // Destructor implementation
        // Add any necessary cleanup code here
    }
     double Character:: distance(Character* c1){return 2;};
     void Character::hit(int hit){};
     string Character::print()const{return "aa";};
  }
