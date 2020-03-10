// Constructors basics
// Note: Copy constructor i yet to be covered
// Getters and setters
// Change different things in the main to try different things

#include <bits/stdc++.h>

using namespace std;

enum Category {
    Music,
    Book,
    Game
};


// The sum function was used to showcase
// that we can have different functions with the same name,
// as long as their prototype is different
// This helped for an easier transition to constructors

int sum(int, int);

int sum(int a, int b){
    return a + b;
}

int sum (int a, int b, int c){
    return a + b + c;
}

double sum (double a, double b){
    return a + b;
}


class Product {
public:

    // Important thing to remember here
    // is that constructor method are called
    // whenever we create an instance of the class.

    // The default constructor is present by...well...default
    // However, if we decide to create another constructor with different prototype,
    // we need to make sure that the default constructor still exists
    Product() = default;

    Product(const char* _name, double _price)
    :
        price(_price)
    {
        this->setName(_name);
        //this->setPrice(_price);
    }

    Product(const char* _name, double _price, int _barcode)
    :
        price(_price),
        barcode(_barcode)
    {
        this->setName(_name);
    }

    double getPrice() const {
        return this->price;
    }

    void setPrice(double _price){
        this->price = _price;
    }

    const char* getName() const {
        return this->name;
    }

    void setName(const char* _name) {
        strcpy(this->name, _name);
    }

    void print() const {
        cout << this->getPrice() << " " << this->getName() << endl;
    }

private:
    char name[50];
    double price;
    int barcode;
};

bool comp(int a, int b){
    return a > b;
}


int main(){
    /*
    Product p;

    double c = 1.234;

    char _name[5] = "abcd";

    p.setPrice(c);
    p.setName(_name);
    p.print();

    _name[1] = '&';

    p.print();

    p.setName(_name);

    p.print();
    */

    //Product p1("Book1", 3.16);
    //p1.print();

    //Product p;

}
