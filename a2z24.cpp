// #include<iostream>
// using namespace std;
// void f(int i, int n) {
//     if(i<1) {
//         cout<<n<<endl;
//         return;
//     }
//     f(i-1, n*i);

// }
// int main() {
//     int n=3;
//     f(n-1,n);
//     return 0;
// }


//for sum and factorial (just replace * with +) below is another way to do same thing

// #include<iostream>
// using namespace std;
// void f(int i, int n) {
//     if(i<1) {
//         cout<<n<<endl;  
//         return;
//     }
//     f(i-1, n+i);

// }
// int main() {
//     int n=10;
//     f(n,0);
//     return 0;
// }

//for factorial, use * insted if +. these were parameter based methods. bwlow are function based (idk proper names. but ones which return value as answer rather than printing it !)

#include<iostream>
using namespace std;
int f(int n) {
    if(n==0) {
        return 0;
    }
    else {
        return n + f(n-1);
    }
}
int main() {
    int n=100;
    cout<<f(n)<<endl;
    return 0;
}
