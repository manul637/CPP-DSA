#include <vector>
using namespace std;

// Brute force approach O(n^2)

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> answer;

    for (int i = 0; i < n; i++) {
        int product = 1;

        for (int j = 0; j < n; j++) {
            if (i != j) {
                product *= nums[j];
            }
        }

        answer.push_back(product);
    }

    return answer;
}

//optimal approach O(n) using prefix and suffix arrays

vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,1);
        vector<int> prefix(n,1);
        vector<int> suffix(n,1);

        //prefix
        for(int i=1 ; i<n ; i++) {
            prefix[i] = prefix[i-1] * nums[i-1];
        }

        //suffix
        for(int i=n-2; i >=0 ; i--){
            suffix[i] = suffix[i+1] * nums[i+1];
        }

        for(int i=0 ; i<n ; i++){
            ans[i] = prefix[i] * suffix[i];
        }

         return ans;
        
    }




// Optimizing space complexity to O(1) (excluding the output array)


vector<int> productExceptSelfOptimal(vector<int>& nums) {
    int n = nums.size();
    vector<int> answer(n, 1);

    // Calculate prefix products
    int prefix = 1;
    for (int i = 0; i < n; i++) {
        answer[i] = prefix;
        prefix *= nums[i];
    }

    // Calculate suffix products and multiply with prefix products
    int suffix = 1;
    for (int i = n - 1; i >= 0; i--) {
        answer[i] *= suffix;
        suffix *= nums[i];
    }

    return answer;
}

vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,1);
       

        //prefix => ans
        for(int i=1 ; i<n ; i++) {
            ans[i] = ans[i-1] * nums[i-1];
        }
        int suffix= 1;

        //suffix
        for(int i=n-2; i >=0 ; i--){
            suffix *= nums[i+1];
            ans[i] *= suffix;
        }

         return ans;
        
    }