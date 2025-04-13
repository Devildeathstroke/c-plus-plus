// Taking input
// Before implementing any algorithm, we should be thorough with taking inputs. Here, we will learn how to read inputs.
// You are given two inputs: a(integer), and b(string). You need to take the input and print a and b separated by a space.
// Note: You have to print a new line at the end after prinintg a and b.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    string b;
    cin>>a;
    cin.ignore();
    getline(cin,b);
    cout<<a<<" "<<b<<endl;
    return 0;
}