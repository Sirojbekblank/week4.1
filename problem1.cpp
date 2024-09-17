//
// Created by Sirojbek on 9/17/2024.
//
#include <iostream>
using namespace std;
int main() {
    long int i;
    cin>>i;
    long int a= -2147483647;
    long int b=  2147483647;
    if(i>a && i<b) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }

    return 0;
}