#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main() {
    vector<int>nums={2,3,8,5,8,4,5,9};   
    map<int,int>kv;
    for(int i=0; i<nums.size(); i++) {
        if(kv.find(nums[i])!=kv.end()){
            cout<<nums[i]<<endl;
            break; //if we want all integers that appear more than once, dont use break;
        }
        kv[nums[i]]++;

    }
    return 0;
}