#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int>nums={1,2,3,4,9,24,32,14};
    for(int i=0; i<nums.size(); i++) {
        for(int j=i; j<nums.size(); j++) {
            if(nums[i]+nums[j]<=10) {
                cout<<"("<<nums[i]<<","<<nums[j]<<")"<<endl;
            }
        }
    }
    return 0;
} 
//used nested loops. tryng to use sliding window

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    vector<int>nums={1,2,3,4,9,24,32,14};
    int i=0, j=nums.size()-1;
    sort(nums.begin(), nums.end());
    while(i!=j) {
        if(nums[i]+nums[j]>10) {
            j--;
        }
        else {
            cout<<nums[i]<<" , "<<nums[j]<<endl;
            i++;
        }
      
    }
    return 0;
}