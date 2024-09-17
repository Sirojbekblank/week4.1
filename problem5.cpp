//
// Created by Sirojbek on 9/17/2024.
//
#include <iostream>
using namespace std;
int main() {
    float a,c;
    char b;
    cin>>a>>b>>c;
    if(b == '+') {
        cout<<a+c;
    }
    else if(b=='-') {
        cout<<a-c;
    }
    else if(b=='*') {
        cout<<a*c;
    }
    else if(b=='/') {
        cout<<a/c;
    }

    return 0;
}