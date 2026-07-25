#include<iostream>
using namespace std;
void rev(int arr[], int i, int n) {
    if(i>=n/2) {
        return;
    }
    swap(arr[i], arr[n-1-i]);
    rev(arr, i+1, n);

}
int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9};
    rev(arr, 0, 9);
    for(int i=0; i<9; i++) {
        cout<<arr[i]<<endl;
    }
    return 0;
}