#include<iostream>
using namespace std;
int main() {

    char n='D';

    for(char i='A'; i<=n; i++) {
        for(char j=n; j>i; j--) {
            cout<<" ";
        }
        for(char j='A'; j<=i; j++) {
            cout<<j;
        }
        for(char j=i-1; j>='A'; j--) {
            cout<<j;
        }
        cout << endl;
    }

    return 0;
}