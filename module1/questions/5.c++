// There are many times when we need to take input of a string that contains multiple words.
// Here, we will learn how to take input of a string that comprises of multiple words. Also, we will learn to clear the input buffer. Your task is to take input of strings and integers and produce the output.
#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, d;
    int b;
    getline(cin,a);
    cin>>b;
    cin.ignore();
    getline(cin,d);
   
    cout << a << endl;
    
    cout << b << endl;
        
    cout << d << endl;
    return 0;
}