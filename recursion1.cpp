#include<iostream>
using namespace std;
void print(int i, string n) {
    if(i>1) {
        return;
    }
    cout<<i<<"."<<n<<endl;
    print(i+1, n);
}
int main() {

    string n;
    cin>>n;
    print(1,n);

    return 0;
}