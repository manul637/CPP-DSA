#include <iostream>
using namespace std;
#include <vector>

 int searchInRotatedSortedArray(vector<int> &arr, int target) {
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target) {
            return mid;
        }

        // Check if the left half is sorted
        if (arr[start] <= arr[mid]) {
            // Target is in the left half
            if (target >= arr[start] && target < arr[mid]) {
                end = mid - 1;
            } else { // Target is in the right half
                start = mid + 1;
            }
        } 
        // Right half must be sorted
        else {
            // Target is in the right half
            if (target > arr[mid] && target <= arr[end]) {
                start = mid + 1;
            } else { // Target is in the left half
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main() {
    vector<int> arr1 = {4, 5, 6, 7, 0, 1, 2}; // rotated sorted array
    int tar1 = 0;

    cout << searchInRotatedSortedArray(arr1, tar1) << endl;

    vector<int> arr2 = {30, 40, 50, 10, 20}; // rotated sorted array
    int tar2 = 10;
    cout << searchInRotatedSortedArray(arr2, tar2) << endl;   

    return 0;
}