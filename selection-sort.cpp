#include<iostream>
#include<vector>
using namespace std;
void selection_sort(vector<int> &nums) {
    for(int i=0; i<nums.size(); i++) {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<nums.size(); i++) {
        int smallest=i;
        for(int j=i; j<nums.size(); j++) {
            if(nums[j]<nums[smallest]) {
                smallest = j;
            }
            //nums[smallest] = min(nums[smallest], nums[j]);
        }
        swap(nums[i], nums[smallest]);
    }
    for(int i=0; i<nums.size(); i++) {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}
int main() {
    vector<int>nums={4,6,3,2,8,6,5,1,9,0};

    selection_sort(nums);

    return 0;
}
