#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

#include <iostream>
using namespace std;



class Point {
public:
    Point();

    Point(double _x, double _y);

    void setX(double _x);

    double getX() const;

    void setY(double _y);

    double getY() const;

    /// both these will hold no real mathematical meaning,
    /// used just as examples
    /// note: other basic arithmetic operators follow the same pattern
    Point operator+(const Point& other);

    ///Would be the same for /=, *= and -=
    void operator+=(const Point& other);

    ///Would be the same for <=, >, >= and !=
    bool operator<(const Point& other);

    void print()const;

    friend ostream& operator<<(ostream& out, const Point& _p);

    friend istream& operator>>(istream& in, Point& _p);

private:
    double x, y;
};



#endif // POINT_H_INCLUDED
