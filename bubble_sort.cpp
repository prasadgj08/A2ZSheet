#include<iostream>
#include<vector>
using namespace std;
void bubble_sort(vector<int> &nums) {
    for(int i=0; i<nums.size(); i++) {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    
    for(int i=0; i<nums.size(); i++) {
        int j=1;
        while(j<nums.size()-i) {
            if(nums[j]<nums[j-1]) {
                swap(nums[j], nums[j-1]);
            }
            j++;
        }
    }
    for(int i=0; i<nums.size(); i++) {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}
int main() {
    vector<int>nums= {4,3,6,5,7,9,2,3,5,0};
    bubble_sort(nums);
    return 0;
}