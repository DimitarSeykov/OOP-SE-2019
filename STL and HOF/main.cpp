#include <bits/stdc++.h>

using namespace std;

const int SZ = 10;
const int ALPHABET_SIZE = 26;

void printVector(const vector<int>& v){
    int sz = v.size();
    for(int i = 0; i < sz; i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

bool isEven(int num){
    return num % 2 == 0;
}

bool isPositive(int num){
    return num > 0;
}

bool isDivisibleBy5(int num){
    return num % 5 == 0;
}

int square(int num){
    return num *  num;
}

vector<int> filter(const vector<int>& v, const function<bool(int)>& pred){

    vector<int> res;

    for(int el : v){
        if(pred(el)){
            res.push_back(el);
        }
    }

    return res;
}

vector<int> mapVector(const vector<int>& v, const function<int(int)>& f){
    vector<int> res;

    for(int el : v){
        res.push_back(f(el));
    }

    return res;
}

void initVector(vector<int>& v){
    for(int i = 0; i < SZ; i++){
        int num = rand() % 10 + 1;
        v.push_back(num);
    }

    for(int i = 0; i < SZ; i++){
        int num = rand() % 10 + 1;
        v.push_back(num*(-1));
    }

    for(int i = 0; i < 5; i++){
        int idx = rand() % 19 + 0;
        v[idx] = v[idx] * (-1);
    }
}


class Point{
public:
    Point(){}
    Point(double _x, double _y){
        x = _x;
        y = _y;
    }
    double x, y;


};

bool operator<(const Point& p1, const Point& p2){
    return p1.x < p2.x;
}

int main(){


    vector<int> v;
    vector<int>::iterator = v.begin();


    /*
    map<Point, int, less<Point>> m;

    m.insert({Point(2,3), 5});
    m.insert({Point(3,4), 7});

    for(auto it = m.begin(); it != m.end(); it++){
        cout << (*it).first.x << " " << (*it).first.y << " " << (*it).second <<  endl;
    }
    */

    /*
    srand(time(nullptr));

    vector<int> v;

    initVector(v);

    printVector(v);
    */
    /*

    vector<int> even = filter(v, isEven);
    printVector(even);
    vector<int> positive = filter(v, isPositive);
    printVector(positive);
    vector<int> divBy5 = filter(v, isDivisibleBy5);
    printVector(divBy5);

    vector<int> squared = mapVector(v, square);
    printVector(squared);

    vector<int> negative = filter(v, [](int num){
                                    return num < 0;
                                  });

    printVector(negative);

    */

    /*
    sort(v.begin(), v.end(), [](int a, int b) -> bool {
            return abs(a) > abs(b);
        });

    printVector(v);
    */


    /*
    map<int, char> m;

    for(int i = 1; i <= ALPHABET_SIZE; i++){
        m[i] = char(i + 'a' - 1);
    }

    cout << m.count(2) << endl;

    m.erase(4);

    for(int i = 1; i <= ALPHABET_SIZE; i++){
        if(m.count(i)){
            cout << m[i] << " ";
        }
    }

    */


    /*
    unordered_set<int> s;

    for(int i = 0; i < SZ; i++){
        int n;
        cin >> n;
        s.insert(n);
    }
    cout <<  endl;
    cout << s.count(12345) << endl;

    auto it = s.begin();

    while(it != s.end()){
        cout << (*it) << endl;
        it++;
    }
    */

    /*
    set<pair<int, int>> s;

    for(int i = 0; i < SZ; i++){
        s.insert({i % 4, i});
    }

    auto it = s.begin();

    while(it != s.end()){
        cout << (*it).first << " " << (*it).second << endl;
        it++;
    }

    cout << endl;

    for(auto it1 = s.begin(); it1 != s.end(); it1++){
        cout << (*it1).first << " " << (*it1).second << endl;
    }

    cout << endl;
    */

    /*
    vector<int> v;

    v.reserve(SZ);

    cout << v.capacity() << endl;


    for(int i = 0; i < 10; i++){
        v.push_back(i + 1);
    }


    printVector(v);

    v.clear();

    cout << v.size() << endl;

    printVector(v);

    */


    /*
    vector<pair<int, int>> v;

    for(int i = 0; i < SZ; i++){
        v.push_back({i % 4, i});
    }


    for(auto p : v){
        cout << p.first << " " << p.second << endl;
    }
    */

}
