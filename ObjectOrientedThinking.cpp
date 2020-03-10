// Basic OOP examples.
// Classes we designed in class with students.
// Fields and Methods
// Static variables
// try different thing sin the main method.

#include <iostream>

using namespace std;

typedef unsigned int u_int;

enum ContractType {
    Labour,
    Civil
};

class Employee {
    char position[20];
    u_int salary;
    u_int workingHours;

};

enum MajorName {
    SI,
    CS,
    Inf,
    PM,
    IS,
    Stats,
    Maths,
    Journalistics,
    PR,
    Law
};

struct Hororium {
    u_int lectures = 0,
          seminar = 0,
          practice = 0;
};



class Lecturer {
public:
    char name[50];

};

class Course {
public:
    char name[100];
    Hororium hororium;
    Lecturer lecturer[20];
    u_int ECTS;
};

class Major {
public:
    MajorName name;
    u_int mandatoryCredits;
    u_int electiveCredits;
    Course mandatoryCourses[50];
    Course electiveCourse[200];
    Course listCourses[10];
};

class Department {
public:
    char name[20];
    Employee employees[20];
    Employee leader;
};

class Grade {
    Course course;
    u_int grade;
};

class Student {
public:
    u_int fn;
    char* name;
    Major major;
    u_int year = 0;
    u_int group = 0;
    Grade grades[100];
    u_int mandatoryCredits = 0;
    u_int electiveCredits = 0;

    void setFN() {
        static u_int globalFN = 0; //static Demo
        this->fn = globalFN++;
    }

    void printInfo()const {
        cout << this->fn << endl; //<< " " << this->name << " " << this->year << " " << this->group << endl;
    }

};

class Faculty {
public:
    char name[50];
    char address[50];
    Major majors[20];
    Department departments[20];
    Employee employees[20];
    Student students[100];
};

class University {
public:
    Faculty faculties[20];
    char name[50];
    char address[50];
    Employee employees[50];
};

int main(){
    //University u;
    Student s1, s2, s3;
    s1.setFN();
    s2.setFN();
    s3.setFN();

    s1.printInfo();
    s2.printInfo();
    s3.printInfo();
    /*char name[50];
    cin.getline(name, 100);
    s.name = name;

    s.year = 1;
    s.group = 3;
    s.printInfo();

    name[3] = '#';
    */

    //s.printInfo();

}
