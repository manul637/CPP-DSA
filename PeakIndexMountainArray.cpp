#include <iostream>
using namespace std;
#include <vector>

//brute force approach
int peakIndexInMountainArray(vector<int> &arr) {
    int n = arr.size();                                   
    for (int i = 1; i < n - 1; i++) {                            //linear traversal/search
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {            //peak condition 
            return i;
        }
    }
    return -1; // This line should never be reached for a valid mountain array
}

//optimal approach
int peakIndexInMountainArrayOptimal(vector<int> &arr) {
    int start = 1;
    int end = arr.size() - 2; // peak cannot be first or last element

    while (start < end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] < arr[mid + 1]) {
            start = mid + 1; // Peak is in the right half
        } else {
            end = mid; // Peak is in the left half or at mid
        }
    }
    return start; // or end, both are equal here
}   