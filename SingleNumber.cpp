#include <iostream>
using namespace std;
#include <vector>

int main() {

    // brute force approch O(n^2)
    vector<int> nums = {4,1,2,1,2};

    cout << "Single number is: " << singleNumber(nums) << endl;
    return 0;
}

int singleNumber(vector<int>& nums) {
    for(int i = 0; i < nums.size(); i++) {
        bool isUnique = true;                      // assume nums[i] is unique
        for(int j = 0; j < nums.size(); j++) {      //comparae with every other element
            if(i != j && nums[i] == nums[j]) {
                isUnique = false;                  // found a duplicate break
                break;
            }
        } 
        if(isUnique) {                             //still unique after inner loop
            return nums[i];                        
        }
    }
    return -1; // This line should never be reached if input is valid
}

    // optimal approch O(n) using XOR bitwise operation
    int singleNumberOptimal(vector<int>& nums) {
        int ans = 0;
        for(int num : nums) {
            ans ^= num;   // XOR operation
        }
        return ans;

    // other inefficient mehtodes - hash map , hash set , sorting , mathematical . 
    
}