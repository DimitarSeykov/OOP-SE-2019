#include <bits/stdc++.h>
#include "Point.h"

using namespace std;

void printAllPoints(Point* points, int sz){
    for(int i = 0; i < sz; i++){
        cout << points[i];
    }
}

int main(){

    /*
    Point p1(1, 1);
    Point p2(2, 1);

    Point p3 = p1 + p2;

    cout << p3 << endl;

    Point p4;
    cin >> p4;

    p4 += p1;

    cout << p4 << endl;

    //cout << (p2 < p1) << endl;
    */

    /*
    Point p;

    cin >> p;

    cout << p;

    printDirect(p);

    cout << calculateDistanceFromCenter(p) << endl;
    */

    /*
    srand(time(nullptr));

    const int sz = 10;
    Point* points = new Point[sz];

    for(int i = 0; i < sz; i++){
        int x = rand() % 15 + 0,
            y = rand() % 15 + 0;

        Point p(x, y);

        points[i] = p;
    }

    cout << "Unsorted:" << endl;

    printAllPoints(points, sz);

    sort(points, points + sz);

    cout << "\nNow sorted:" << endl;

    printAllPoints(points, sz);
    delete[] points;
    */

    /**
    Sorting them was possible because we have overloaded operator<.
    Otherwise it would not be possible.
    Here's something even more interesting:
    You can go to Point.cpp, to the definition of Point::operator<;
    There you can uncomment the line that prints the distances.
    Then, you can see the actual comparisons that are being made by the std sorting algorithm.
    Pretty awesome in my opinion.
    */

    /*


    NumA a(10);

    NumB b(12);

    cout << a.sum(b) << endl;

    */

    Point p;

    cout << p;

}
