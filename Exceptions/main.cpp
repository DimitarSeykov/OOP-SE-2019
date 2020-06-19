#include <iostream>
#include <stdexcept>

using namespace std;

const int ASCII_CAP = 255;

char convertIntToChar(int num){
    if(num < 0 or num > ASCII_CAP){
        throw invalid_argument("Argument must be positive and under 256!");
    }

    return (char)num;
}

void initAndExecute(){
    try{
        int n;
        cin >> n;
        cout << convertIntToChar(n) << endl;
    }
    catch(exception& e){
        cerr << e.what() << endl;
        return;
    }
}

const int CAP = 100;

class Stack {
public:
    Stack(){};

    void push(int num){
        if(size == CAP){
            throw overflow_error("Stack is full!");
        }

        arr[size] = num;
        size++;
    }

    void pop(){
        if(isEmpty()){
            throw runtime_error("Stack is empty in pop attempt!");
        }

        size--;
    }

    int peek()const {

        if(isEmpty()){
            throw runtime_error("Stack is empty in peek attempt!");
        }

        return arr[size - 1];
    }

    bool isEmpty()const {
        return size == 0;
    }

private:
    int arr[CAP];
    int size = 0;
};

int main(){

    Stack s;


    try{
        for(int i = 0; i < 103; i++){
            s.push(i % 3);
        }

        while(!s.isEmpty()){
            cout << s.peek() << endl;
            s.pop();
        }

        s.pop();
    }
    catch(exception& e){
        cerr << e.what() << endl;
        return -1;
    }


}
