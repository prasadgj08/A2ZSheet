#include<iostream>
using namespace std;
int main() {

    char n='E';
    for(char i = n; i>='A'; i--) {
        for(char j='A'; j<=i; j++) {
            cout<<j;
        }
        cout<<endl;
    }

    return 0;
} //fLaWlEsS