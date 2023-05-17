#pragma once
// #include <iostream>
#include <string>
using namespace std;
namespace ariel{
class Point {

private:
    double numA;
    double numB;
    
public:

    // Constructor. Also works as a conversion from double and
    // also as a default ctor.
     Point(double num1,double num2);
     Point(Point const& other);
     double distance( Point p2);
     void print();
     Point moveTowards(Point src , Point dst ,double distance);
     double getX()const{
        return this->numA;
     }
     double getY()const{
        return this->numB;
     }
  };
}