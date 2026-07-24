#include<iostream>
using namespace std;
void f(int arr[], int i, int j) {
    
    if(i>=j) {
        return;
    }
    swap(arr[i], arr[j]);
    //insted of increment and d...ment in func, we can also do it here
    f(arr, i+1, j-1);  
}

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr) / sizeof(arr[0]);
    f(arr, 0, size-1);
    for(int i=0; i<size; i++) {
        cout<<arr[i]<<endl;
    }



    return 0;
}