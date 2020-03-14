#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

#include <bits/stdc++.h>

class Student {
public:
    Student(); /// default constructor

    Student(int _fn, const char* _name); ///constructor

    Student(const Student& other); /// copy constructor

    Student& operator=(const Student& other); /// assignment operator

    ~Student(); ///destructor

    void setFN(int _fn);

    int getFN() const;

    void setName(const char* _name);

    const char* getName() const;

    void printInfo()const;

private:
    int fn;
    char* name;
};

#endif // STUDENT_H_INCLUDED
