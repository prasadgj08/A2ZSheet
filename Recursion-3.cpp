#include<iostream>
using namespace std;

int FO(int arr[], int x, int i, int sz) {
    if(i==sz) {
        return -1;
    }
    if(arr[i]==x) {
        return i;
    }
    return FO(arr,x,i+1,sz);
}

int main() {
    int arr[] = {1,22,6,3,1,4,8,3,5};
    int sz = sizeof(arr)/sizeof(arr[0]);
    cout<<FO(arr,2,0,sz)<<endl;
    return 0;
}