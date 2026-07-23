#include<iostream>
using namespace std;
void f(int i, int n, int x)  {
    if(i>n) {
        return;
    }
    x=x+i;
    f(i+1, n,x);
    if(i==n) {
        cout<<x<<endl;
    }

}
int main() {

    f(0,6, 0); //i=1 also works
    return 0;
}