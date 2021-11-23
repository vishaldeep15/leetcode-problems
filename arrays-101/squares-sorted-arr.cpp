/*
Given an array nums of integers, return how many of them contain an even number of digits.
*/

#include <iostream>
#include <cmath>

using namespace std;

void printArr(int *arr, int size) {
    for (int i=0; i<size; i++){
        cout << arr[i] << endl;
    }
}

int* sortArr(int *arr, int *resultArr, int size) {
    int leftPtr = 0;
    int rightPtr = size-1;
    int arrIdx = size-1;
    while (arrIdx >= 0) {
        int square = 0;
        if(abs(arr[leftPtr]) < abs(arr[rightPtr])) {
            square = arr[rightPtr] * arr[rightPtr];
            --rightPtr;
        } else {
            square = arr[leftPtr] * arr[leftPtr];
            ++leftPtr;
        }
        // cout << "lptr=" << leftPtr << " rptr=" << rightPtr << " Square" << square << endl;
        resultArr[arrIdx] = square;
        arrIdx--;
    }
    return resultArr;
}

int main() {
    // int arr[] = {12,345,2,6,7896};
    int arr[] = {-4,-1,0,3,10};    
    int size = sizeof(arr)/sizeof(arr[0]);
    int resultArr[size];

    printArr(sortArr(arr, resultArr, size), size);
    
    return 0;
}