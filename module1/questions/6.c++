// There are times when your answer is a floating point that contains undesired amount of digits after decimal. Here, we'll learn how to get a precise answer out of a floating number. You are given two floating numbers a and b. You need to output a/b and decimal precision of a/b upto 3 places after the decimal point.

#include <bits/stdc++.h>
using namespace std;

int main() {
    float a=5.43,b=2.653;
    float c = a/b;
    cout<<"Value of a/b without decimal precision "<<c<<endl;
    cout<<"Value of a/b with decimal precision "<<setprecision(3)<<fixed<<c<<endl;

    return 0;
}