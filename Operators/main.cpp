#include <iostream>
#include "Point.h"

using namespace std;


int main(){
    Point p1(1, 1);
    Point p2(2, 1);

    Point p3 = p1 + p2;

    cout << p3 << endl;

    Point p4;
    cin >> p4;

    p4 += p1;

    cout << p4 << endl;

    //cout << (p2 < p1) << endl;
}
