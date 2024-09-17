//
// Created by Sirojbek on 9/17/2024.
//
#include <iostream>
using namespace std;
int main() {
    string G;
    float N;
    cin>>G>>N;
    if(G=="M" && N<1.70) {
        cout<<"Short"<<endl;
    }
    else if(G=="M" && N>=1.70 && N<1.85) {
        cout<<"Normal"<<endl;
    }
    else if(G=="M" && N>=1.85) {
        cout<<"Tall"<<endl;
    }
    else if(G=="F" && N<1.60) {
        cout<<"Short"<<endl;
    }
    else if(G=="F" && N>=1.60 && N<1.75) {
        cout<<"Normal"<<endl;
    }
    else if(G=="F" && N>=1.75) {
        cout<<"Tall"<<endl;
    }

    return 0;
}