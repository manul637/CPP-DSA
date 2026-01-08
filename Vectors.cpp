#include <iostream>
using namespace std;

#include <vector>

int main() {
    
    // vector<int> numbers;

    // for(int i : numbers) {
    //     cout << i << endl;

    // }

    // vector<char> letters = {'a', 'b', 'c', 'd', 'e'};

    // for(char c : letters) {
    //     cout << c << endl;
    // }
     
    // cout << "size = " << letters.size() << endl;   
    //  return 0;
// --------------------------------------------------------------------------------
    vector<int> nums;

    nums.push_back(5);
    nums.push_back(10);
    nums.push_back(15);

    cout << "size = " << nums.size() << endl;

    nums.pop_back();                                      //delete last

    cout << "size = " << nums.size() << endl;

    cout << nums.front() << endl;                                 //first element
    cout << nums.back() << endl;                                  //last element   
    
    cout << nums.at(0) << endl;                                 //element at index 0 = nums[0]
    cout << nums.at(1) << endl;                                 //element at index 1 = nums[1]


    nums.push_back(20);
    nums.push_back(25); 
    nums.push_back(30);
    cout << "size = " << nums.size() << endl;   
    cout << "Capacity = " << nums.capacity() << endl;                 //capacity
}

// --------------------------------------------------------------------------------



