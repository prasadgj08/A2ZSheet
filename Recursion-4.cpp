// #include<iostream>
// #include<vector>
// using namespace std;

// int psubs(vector<int> &nums, int arr[], int i, int sz, int mx) {
//     int sum=0;
//     if(i==sz) {
        
//         for(int j=0; j<nums.size(); j++) {
//             sum = sum ^ nums[j];
//         }
//         mx=max(mx, sum);
//         return mx;
//     }
//     //pick
//     nums.push_back(arr[i]);
//     psubs(nums, arr, i+1,sz, arr[0]);
//     //remove
//     nums.pop_back();
//     //not pick arr[i]
//     psubs(nums, arr, i+1,sz, arr[0]);
//     return mx;

// }

// int main() {
//     int arr[] = {7,6,77};
//     vector<int>nums;
//     int sz= sizeof(arr)/sizeof(arr[0]);
//     cout<<psubs(nums, arr, 0, sz, arr[0])<<endl;
//     return 0;
// }

// here above code failed because we arent actually using returned values from function anywhere. also sum isnt initialised. problem with hardcoded arr[0] too. 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int psubs(vector<int> &nums, int arr[], int i, int sz) {
    // Base Case: We've made a decision for every element
    if (i == sz) {
        int sum = 0; // Initialize to 0 so XOR starts fresh
        for (int j = 0; j < nums.size(); j++) {
            sum = sum ^ nums[j];
        }
        return sum; // Return the XOR sum of this subset
    }

    // Option 1: Pick arr[i]
    nums.push_back(arr[i]);
    int pick = psubs(nums, arr, i + 1, sz);

    // Backtrack (remove arr[i])
    nums.pop_back();

    // Option 2: Don't pick arr[i]
    int dont_pick = psubs(nums, arr, i + 1, sz);

    // Return the maximum XOR sum from both choices
    return max(pick, dont_pick);
}

int main() {
    int arr[] = {6, 6, 7};
    vector<int> nums;
    int sz = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Max XOR Subset Sum: " << psubs(nums, arr, 0, sz) << endl;
    return 0;
}