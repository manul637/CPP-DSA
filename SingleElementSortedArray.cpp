#include <iostream> 
#include <vector>
using namespace std;

//bruteforce approach




//optimised approach 
int singleNonDuplicate(const vector<int>& nums) {
 int n = nums.size();
        if (n == 1) return nums[0];

        int start = 0, end = n - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;   // FIX 1

            // boundary checks
            if (mid == 0) {
                if (nums[0] != nums[1]) return nums[0];
                else start = mid + 1;
                continue;
            }

            if (mid == n - 1) {
                if (nums[n - 1] != nums[n - 2]) return nums[n - 1];
                else end = mid - 1;
                continue;
            }

            // main logic
            if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1])
                return nums[mid];

            if (mid % 2 == 0) {  // even index
                if (nums[mid] == nums[mid - 1])
                    end = mid - 1;
                else
                    start = mid + 1;
            } else {             // odd index
                if (nums[mid] == nums[mid - 1])
                    start = mid + 1;
                else
                    end = mid - 1;
            }
        }

        return -1;
    }

int main() {
    vector<int> nums = {1,1,2,3,3,4,4,8,8};
    cout << "The single non-duplicate element is: " << singleNonDuplicate(nums) << endl;
    return 0;   
}

    