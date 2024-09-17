//
// Created by Sirojbek on 9/17/2024.
//
#include <iostream>
using namespace std;
int main() {
    int winter,raining;
    cin>>winter>>raining;
    if(winter==1) {
        cout<<"Bus"<<endl;
    }
    else if (raining==1 && winter==0) {
        cout<<"Walk"<<endl;
    }
    else {
        cout<<"Bike"<<endl;
    };


    return 0;
}