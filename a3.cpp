#include<iostream>
#include<vector>
using namespace std;
    vector<int>f(vector<int>& arr, int n, int sz) {
    if((sz-1-n)-n == 0 || (sz-1-n)-n == 1) {
        return arr;
    }
    int temp = arr[n];
    arr[n]=arr[sz-1-n];
    arr[sz-1-n] = temp; 
    f(arr, n+1, sz);
    // just use swap function rather than above 3 lines.
    return arr;
}
int main() {
    int n=0;
    int sz=9;
    vector<int>arr = {1,2,3,4,5,6,7,8,9};
    f(arr, n, sz);

    // Print elements using a loop:
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
} //GND FAD EFFORT TBH. LOOK at a4.cpp, tried a cleaner solutoin
