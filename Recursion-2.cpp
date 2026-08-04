#include<iostream>
#include<vector>
using namespace std;

int Count(vector<int> &nums, int x, int freq, int i) {
    if(nums[i]==x) {
        freq++;
    }
    if(i==nums.size()-1) {
        return freq; //or make function type as void, return nothing, and cout<<freq before return statement
    }
    return Count(nums, x, freq, i+1);
}

int main() {
    vector<int>nums = {1,2,3,1,1,1,1,1,1,2,6,4,5,2,3,5,4};
    cout<<Count(nums, 1, 0, 0)<<endl;
    return 0;
}
//could have used backtracking. like adding up the count while returning rather than while going up. 