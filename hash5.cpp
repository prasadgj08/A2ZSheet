// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> interS(vector<int> &nums1, vector<int> &nums2) {
//     vector<int>is;
//     for(int i=0; i<nums1.size(); i++) {
//         for(int j=0; j<nums2.size(); j++) {
//             if(nums1[i]==nums2[j]) {
//                 is.push_back(nums1[i]);
//                 break;
//             }
//         }
//     }
//     return is;

// }

// int main() {
//     vector<int>nums1={2,4,6,8,9,10};
//     vector<int>nums2={1,3,2,6,5,9};
//     vector<int>is=interS(nums1, nums2);
//     for(auto i : is) {
//         cout<<i<<endl;
//     }
//     return 0;
// } //works but o(n2) so unpotimized method. we can use hash! 
                                                                

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int> interS(vector<int> &nums1, vector<int> &nums2) {
    unordered_map<int,int>check;
    vector<int>is;
    for(int i=0; i<nums1.size(); i++) {
        check[nums1[i]]++;
    }
    for(int i=0; i<nums2.size(); i++) {
        if(check.find(nums2[i])!=check.end()) {
            is.push_back(nums2[i]);
        }
    }
    return is;

}

int main() {
    vector<int>nums1={2,4,6,8,9,10};
    vector<int>nums2={1,3,2,6,5};
    vector<int>is=interS(nums1, nums2);
    for(auto i : is) {
        cout<<i<<endl;
    }
    return 0;
}