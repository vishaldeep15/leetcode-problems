/*
Given a binary array nums, return the maximum number of consecutive 1's in the array.
*/

#include <iostream>

using namespace std;

int findMaxConsecutiveOnes(int *binArr, int size) {
    int maxOnesCount = 0;
    int maxOnes = 0;
    int preMaxOnesCount = 0;
    for(int i=0; i<size; i++) {
        // cout << i << endl;
        if (binArr[i] == 1) {
            maxOnesCount++;
            if (preMaxOnesCount < maxOnesCount) {
                maxOnes = maxOnesCount;
            }
        } else {
            preMaxOnesCount = maxOnesCount;
            maxOnesCount = 0;
        }
    }
    return maxOnes;
}

int main() {
    // int binArr[6] = {1,0,1,1,0,1};
    int binArr[6] = {1,0,1,0,1,0};
    
    cout << "Maximum Ones Count " << findMaxConsecutiveOnes(binArr, 6) << endl;
    return 0;
}