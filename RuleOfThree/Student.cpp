#include "Student.h"

using namespace std;

Student::Student() {
    //cout << "Default constructor" << endl;
    this->fn = 0;
}

Student::Student(int _fn, const char* _name)
    :
        fn(_fn)
    {
        this->setName(_name);
    }

Student::Student(const Student& other){
    this->setFN(other.getFN());
    this->setName(other.getName());
}

Student& Student::operator=(const Student& other){

    if(this == &other){
        return *this;
    }

    //delete[] this->name;

    this->setFN(other.getFN());
    this->setName(other.getName());

    return *this;
}

Student::~Student(){
    //cout << "destructor called" << endl;
    delete[] this->name;
}

void Student::setFN(int _fn){
    this->fn = _fn;
}

int Student::getFN() const {
    return this->fn;
}

void Student::setName(const char* _name){
    //!!!! delete[] is really important here !!!!
    delete[] this->name;
    this->name = new char[strlen(_name) + 1];
    strcpy(this->name, _name);
}

const char* Student::getName() const {
    return this->name;
}

void Student::printInfo() const {
    cout << this->fn << " " << this->name << endl;
}
