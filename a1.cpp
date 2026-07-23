#include<iostream>
using namespace std;
int main() {
    int x=0, y=0;
    if(x==0 && y==0) {
        cout<<"Origin!"<<endl;
    }
    else if(x==0) {
        cout<<"Y-Axis!!"<<endl;
    }
    else if(y==0) {
        cout<<"X-Axis!!"<<endl;
    }
    else {
        cout<<"Random number which dosent lie on axis"<<endl;
    }


    return 0;

}