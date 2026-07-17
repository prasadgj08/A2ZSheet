#include<iostream>
using namespace std;
int main() {

    int n=5;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            cout<<j;
        }
        for(int j=i; j<=n-1; j++) {
            cout<<" ";
        }
        for(int j=i; j<=n-1; j++) {
            cout<<" ";
        }
        for(int j=i; j>=1; j--) {
            cout<<j;
        }

        cout<<endl;
    }

    return 0;
} //khatakhata hkui khui)x4 khalman khalman khili x4