#include <bits/stdc++.h>

using namespace std;


enum Type {
    mammal,
    bird,
    fish,
    reptile,
    amphibian
};
map<Type, string> mapped;

class Animal {
public:
    Animal(){
        cout << "constructor of animal" << endl;
    }


    virtual void makeSound()const = 0;

    virtual void printInfo()const{
        cout << "General Animal" << endl;
    }

    virtual ~Animal(){
        //cout << "destructor of animal" << endl;
    }

protected:
    int numLegs = 0;
    Type type;
};

class Cat : public Animal {
public:
    Cat(){
        numLegs = 4;
        type = mammal;
        //cout << "constructor of Cat" << endl;
    }

    void makeSound()const{
        cout << "Meow" << endl;
    }

    void printInfo()const override{
        cout << "Cat is a " << mapped[type] << " with " << numLegs << " legs and " << pregnancyDuration << " days pregnancy duration." << endl;
    }

    ~Cat(){
        //cout << "destructor of cat" <<  endl;
    }

private:
    int pregnancyDuration = 60; //days
};


class Lion : public Cat{
public:
    void printInfo()const override{
        cout << "Lion is a " << mapped[type] << " with " << numLegs << " legs" << endl;
    }
};


class Ostrich : public Animal {
public:
    Ostrich(){
        numLegs = 2;
        type = bird;
    }

    void makeSound()const{
        cout << "Hsss" << endl;
    }

    void printInfo()const override{
        cout << "Ostrich is a " << mapped[type] << " with " << numLegs << " legs and " << eggsLayingPeriod << " days eggs laying period." << endl;
    }

private:
    int eggsLayingPeriod = 45; //days
};


class Salmon : public Animal {
public:
    Salmon(){
        numLegs = 0;
        type = fish;
    }

    void makeSound()const{
        cout << "Glglgl" << endl;
    }



private:
    int hatchingPeriod = 100; // days
};


void init(){
    mapped[mammal] = "Mammal";
    mapped[bird] = "Bird";
    mapped[fish] = "Fish";
    mapped[reptile] = "Reptile";
    mapped[amphibian] = "Amphibian";
}


void printInfoExternal(Animal* animal){
    animal->printInfo();
}


void foo(Animal* animal); //work with polymorphic object

int main(){

    Cat c;
    Salmon s;
    Ostrich os;
    Lion l;
    cout << "done" << endl;


    //printInfoExternal(&c);

    /*
    vector<Animal*> animals;

    animals.push_back(&c);
    animals.push_back(&s);
    animals.push_back(&os);

    int sz = animals.size();
    */


    Animal** animals = new Animal*[10];

    animals[0] = &c;
    animals[1] = &s;
    animals[2] = &os;
    animals[3] = &l;

    int sz = 4;

    for(int i = 0; i < sz; i++){
        animals[i]->printInfo();
    }

    delete[] animals;






    /*
    Animal* a = &c;

    a->printInfo(); /// behaves like a Cat
    a->makeSound(); /// behaves like a Animal
    */



}
