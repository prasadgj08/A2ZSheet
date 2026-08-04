#include<iostream>
using namespace std;
bool check(int arr[], int sz, int i) {
    if(i>sz-1) {
        return true;
    }
    if(arr[i]<arr[i-1]) {
        return false;
    } 
    return check(arr, sz, i+1);
}
int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,1};
    int sz=sizeof(arr)/sizeof(arr[0]);
    cout<<check(arr, sz, 1)<<endl;
    

    return 0;
}