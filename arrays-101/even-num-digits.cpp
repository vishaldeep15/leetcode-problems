/*
Given an array nums of integers, return how many of them contain an even number of digits.
*/

#include <iostream>

using namespace std;

int countDigits(int num) {
    int count = 0;
    while(num != 0){
        num = num / 10;
        count++;
    }
    return count;
}

int findEvenNumDigits(int *arr, int size) {
    int evenDigitsCount = 0;
    for(int i=0; i<size; i++){
        if (countDigits(arr[i])%2 == 0){
            evenDigitsCount++;
        }
    }
    return evenDigitsCount;
}

int main() {
    // int arr[] = {12,345,2,6,7896};
    int arr[] = {555,901,482,1771};
    
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << findEvenNumDigits(arr, size) << endl;
    return 0;
}