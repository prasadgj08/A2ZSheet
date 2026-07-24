#include<iostream>
using namespace std;
bool f(string name, int n) {
    for(int i=0; i<n; i++) {
        if(name[i] != name[n-i-1] && i<=n/2) {
            return false;
        }
        if(i>n/2) {
            break;
        }
    }
    return true;
}
int main() {
    string name = "lMADAMl";
    cout<<f(name, 7)<<endl;
    return 0;
}