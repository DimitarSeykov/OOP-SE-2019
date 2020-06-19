#include <bits/stdc++.h>

using namespace std;


/**
Agenda:

Algorithm complexity
    - time complexity
    - memory complexity

Sorting Algorithms
    - Slow algos recap
    - Quick Sort
    - Merge Sort
    - Counting

    std sort - quick sort + heap sort; < 16 elements - insertion sort; <= 5 el ifs

Binary Search

Linked List

Tree
    - BST
    - AVL / RB
    - Heap, Heap sort
    - Trie

Graphs
    - BFS
    - DFS
    - Topo Sort

Hashing
*/


/**
Complexity
- n
- O(1) -
- O(log n) - logaritmic
- O(n) - linear
- O(n*logn) - nlogn
- O(n^2) - quadratic  n(n+1)/2 = 1/2*n^2 + 3/2*n
- O(n^3) - cubic
- O(2^n) - exponential
- O(n!) - factorial
*/



void selectionSort(int* arr, int n){
    for(int i = 0; i < n; i++){
        int minEl = arr[i];
        int idx = i;
        for(int j = i; j < n; j++){
            if(arr[j] < minEl){
                minEl = arr[j];
                idx = j;
            }
        }
        swap(arr[idx], arr[i]);
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

///O(m), m = maxEl - minEl
void countingSort(int* arr, int n){
    int hist[1000] = {};

    int maxEl = arr[0];

    for(int i = 0; i < n; i++){
        hist[arr[i]]++;
        if(arr[i] > maxEl){
            maxEl = arr[i];
        }
    }

    for(int i = 0; i <= maxEl; i++){
        for(int j = 0; j < hist[i]; j++){
            cout << i << " ";
        }
    }
}


int binarySearchRec(int* arr, int l, int r, int x){
    if(l <= r){
        int m = l + (r - l) / 2;

        if(arr[m] == x){
            return m;
        } else if(arr[m] < x){
            binarySearchRec(arr, m + 1, r, x);
        } else {
            binarySearchRec(arr, l, m - 1, x);
        }
    }
    else return -1;
}

int binarySearchIter(int* arr, int n, int x){
    int l = 0,
        r = n - 1;

    while(l <= r){
        int m = l + (r - l) / 2;

        if(arr[m] == x){
            return m;
        } else if(arr[m] < x){
            l = m + 1;
        } else {
            r = m - 1;
        }
    }

    return -1;
}


int main(){

    int n, arr[100];
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int x;
    cin >> x;

    cout << binarySearchIter(arr, n, x) << endl;
    //countingSort(arr, n);



    /*
    int n;
    cin >> n;

    int arr[1000];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int sum = 0;


    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            sum += i;
        }
    }


    for(int j = 0; j < n; j++){
        for(int i = j; i < n; i*=3){
            sum += i;
        }
    }

    */


}

/*

a5, a10, a12, ....a0, a7

pivot a7

a5, a3, a4.... a7, a12, a10, a9...


---------



1 5 7 9
-1 3 4 8 10


-1 1 3 4 5 7 8 9 10

a5, a10, a12, ....a0, a7

(2, 1) (1, 5) (1, 3) (2, 4)

stable


10
-4 -1 3 11 18 22 23 23 30 31


*/
