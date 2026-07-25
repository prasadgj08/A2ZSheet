#include<iostream>
using namespace std;
bool f(string name, int n, int i) {
    if(i>n/2) {
        return true;
    }
    if(name[i] != name[n-i-1]) {
        return false;
    }
    return f(name, n, i+1);
    
}
int main() {
    string name = "12344321";
    cout<<f(name,8,0)<<endl;
    return 0;
} //fLaWlEsS
//look at a5.cpp, we have solved using normal loop;