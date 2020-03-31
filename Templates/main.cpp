#include <iostream>
#include "Stack.h"

using namespace std;

class Point {
public:

    Point(){
        this->x = -1;
        this->y = -1;
    };

    Point(double _x, double _y){
        this->x = _x;
        this->y = _y;
    }

    Point operator+(const Point& other){
        Point newPoint(this->x + other.x, this->y + other.y);
        return newPoint;
    }

    friend ostream& operator<<(ostream& os, const Point& p){
        os << p.x << " " << p.y;
        return os;
    }

    //getters and setters (not the focus of this topic
//private:
    double x, y;
};

template <typename T>
T sum(T a, T b){
    return a + b;
}

///check whether el. x is in arr
template <typename T>
bool checkIfContains(T x, T* arr, int n){
    if(n > 0){
        T first = arr[0];
        cout << first << endl;
    }

    for(int i = 0; i < n; i++){
        if(arr[i] == x){
            return true;
        }
    }
    return false;
}


int main(){
    /*
    int a = 10, b = 12;
    cout << sum (a, b) << endl;

    Point p1(10, 12), p2(2, 3);

    Point p3 = sum(p1, p2);

    cout << p3.x << endl;
    */

    /*
    const int ARR_SZ = 5;
    double arr[ARR_SZ] = {3.14, 6.26, 1.111, 7.1, 8.0};
    double x = 2.73;

    cout << checkIfContains(x, arr, ARR_SZ) << endl;

    Point ps[3] = {Point(1, 2), Point(2, 3), Point(3, 4)};

    cout << ps[1].x << endl;
    */

    Stack<Point> s;
    for(int i = 0; i < 10; i++){
        s.push(Point(i, i*3));
    }

    //example of calling a default constructor without creating an instance of the class explicitly
    s.push(Point());

    //the same, but with a constructor with parameters
    s.push(Point(123,456));

    while(!s.empty()){
        cout << s.peek() << endl;
        s.pop();
    }

}
