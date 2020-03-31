#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <iostream>
using namespace std;

const int CAP = 100;

template <class T>
class Stack {
public:
    Stack();

    void push(T el);

    void pop();

    T peek() const;

    bool empty();

private:
    T holder[CAP];
    int size = 0;
};

template <class T>
Stack<T>::Stack() = default;

template <class T>
void Stack<T>::push(T el){
    if(size == CAP){
        cout << "Stack is full" << endl;
        return;
    }

    holder[size] = el;
    size++;
}

template <class T>
void Stack<T>::pop(){
    if(size == 0){
        cout << "Empty Stack!!" <<  endl;
        return;
    }

    size--;
}

template <class T>
T Stack<T>::peek() const {
    ///exception
    return holder[size - 1];
}

template <class T>
bool Stack<T>::empty(){
    return this->size == 0;
}

#endif // STACK_H_INCLUDED
