#include <iostream>
using namespace std;
#include <vector>

int binarySearch( vector<int> &arr, int target){
    int start = 0;
    int end = arr.size() - 1;

    while(start <= end){
        int mid = start + (end - start) / 2;

        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] < target){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}


int main() {

    vector<int> arr1 = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19}; //even
    int tar1 =7;

    cout << binarySearch(arr1, tar1) << endl;

    vector<int> arr2 = {2, 4, 6, 8, 10, 12, 14, 16, 18}; //odd
    int tar2 = 16;
    cout << binarySearch(arr2, tar2) << endl;   

    return 0;
}


