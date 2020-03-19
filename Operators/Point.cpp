#include "Point.h"
#include <math.h>
//using namespace std;

Point::Point(){
    this->setX(0);
    this->setY(0);
}

Point::Point(double _x, double _y){
    this->setX(_x);
    this->setY(_y);
}

double Point::getX()const {
    return this->x;
}

void Point::setX(double _x){
    this->x = _x;
}

double Point::getY()const {
    return this->y;
}

void Point::setY(double _y){
    this->y = _y;
}

Point Point::operator+(const Point& other){
    Point pNew(this->getX() + other.getX(), this->getY() + other.getY());
    return pNew;
}

void Point::operator+=(const Point& other){
    this->setX(this->getX() + other.getX());
    this->setY(this->getY() + other.getY());
}

bool Point::operator<(const Point& other){
    double d1 = 0, d2 = 0;

    d1 = sqrt((this->getX() * this->getX()) + (this->getY() * this->getY()));
    d2 = sqrt((other.getX() * other.getX()) + (other.getY() * other.getY()));

    //cout << d1 << " " << d2 << endl;

    return d1 < d2;// ? true : false;
}


void Point::print()const {
    cout << this->getX() << " " << this->getY();
}

ostream& operator<<(ostream& out, const Point& _p){
    out << "Point with coords: (";
    out << _p.getX() << " " << _p.getY();
    out << ")" << endl;

    return out;
}

istream& operator>>(istream& in, Point& _p){
    in >> _p.x >> _p.y;
    return in;
}
