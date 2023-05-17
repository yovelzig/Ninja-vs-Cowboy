#include "Point.hpp"
#include "math.h"
#include <iostream>
#include <string>
using namespace std;
namespace ariel{
    Point::Point(double num1,double num2){
        this->numA = num1;
        this->numB = num2;
    }
    Point::Point(Point const& other){
        this->numA = other.getX();
        this->numB = other.getY();
    }
    double Point::distance(Point p2){
        double x = pow((p2.getX() - this->getX()),2);
        double y = pow((p2.getY() - this->getY()),2);
        return sqrt(x+y);
    }
    void Point::print(){
        cout << "(" << this->getX() << ", " << this->getY() << ")" << endl;
    }
    Point Point::moveTowards(Point src , Point dst ,double distance){
      return Point(0,0)  ;
    }
}