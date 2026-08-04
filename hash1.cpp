#include<iostream>
#include<unordered_map>
using namespace std;
void twoSum(int target, int arr[], int size) {
   
    unordered_map<int, int>pp;
    for(int i=0; i<size; i++) {
        if(pp.count(target-arr[i])==1) {
            cout<<pp[target-arr[i]]<<" "<<i<<endl;
            return;
        }
        pp[arr[i]]=i;
    }
    cout<<"no solution found"<<endl;
}
int main() {
    int arr[]={-1,3,1,2,4,5,6,7,8,9};
    int target = 7;
    int size = sizeof(arr)/sizeof(arr[0]);
    twoSum(target, arr, size);
    return 0;
}