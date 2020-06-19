#include <bits/stdc++.h>

using namespace std;

template <class T>
class Matrix {
public:
    Matrix();
    Matrix(unsigned int, unsigned int);
    Matrix(const Matrix& other);
    const Matrix& operator=(const Matrix& other);
    ~Matrix();

    T getAt(int x, int y)const;
    void setAt(int x, int y, T val);
    void transpose();

    void print() const;

private:
    unsigned int height;
    unsigned int width;
    T defaultValue = T();
    const int defaultSize = 2;
    T** elements;

    void initializeMatrix();
    void freeMemory();
};

template <class T>
Matrix<T>::Matrix(){
    height = width = defaultSize;

    initializeMatrix();
}

template <class T>
Matrix<T>::Matrix(unsigned int _h, unsigned int _w){
    height = _h;
    width = _w;
    initializeMatrix();
}

template <class T>
void Matrix<T>::initializeMatrix(){
    elements = new T*[height];

    for(int i = 0; i < height; i++){
        elements[i] = new T[width];
    }

    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            elements[i][j] = defaultValue;
        }
    }
}

template <class T>
Matrix<T>::Matrix(const Matrix& other){
    height = other.height;
    width = other.width;
    initializeMatrix();

    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            elements[i][j] = other.elements[i][j];
        }
    }
}


template<class T>
const Matrix<T>& Matrix<T>::operator=(const Matrix& other){
    if(this != &other){
        freeMemory();
        height = other.height;
        width = other.width;
        initializeMatrix();
        for(int i = 0; i < height; i++){
            for(int j = 0; j < width; j++){
                elements[i][j] = other.elements[i][j];
            }
        }
    }
    return *this;
}



template <class T>
void Matrix<T>::freeMemory(){
    for(int i = 0; i < height; i++){
        delete[] elements[i];
    }

    delete[] elements;
}

template <class T>
Matrix<T>::~Matrix(){
    freeMemory();
}

template <class T>
T Matrix<T>::getAt(int x, int y)const{
    if(x > height or y > width){
        throw invalid_argument("Invalid Position");
    }
    return elements[x - 1][y - 1];
}

template <class T>
void Matrix<T>::setAt(int x, int y, T val){
    if(x > height or y > width){
        cerr << "Invalid position!" << endl;
        return;
    }
    elements[x - 1][y - 1] = val;
}

template <class T>
void Matrix<T>::transpose(){
    Matrix<T> temp = *this;

    freeMemory();
    height = temp.width;
    width = temp.height;
    initializeMatrix();

    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            elements[i][j] = temp.elements[j][i];
        }
    }


}


template <class T>
void Matrix<T>::print()const {
    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            cout << elements[i][j] << " ";
        }
        cout << endl;
    }
}



int main(){
    Matrix<int> m1(2, 3);
    m1.print();

    //Matrix<int> m2(4, 5);

    //m1 = m2;

    m1.setAt(1, 1, 11);
    m1.setAt(1, 2, 12);
    m1.setAt(2, 1, 21);
    m1.setAt(2, 2, 22);
    m1.setAt(1, 3, 13);
    m1.setAt(2, 3, 23);

    m1.print();

    try {
        cout << m1.getAt(2, 2) << endl;
    } catch(exception& e){
        cout << e.what() << endl;
    }

    m1.transpose();

    m1.print();


}
