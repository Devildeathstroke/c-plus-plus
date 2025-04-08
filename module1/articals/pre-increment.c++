#include <bits/stdc++.h>
using namespace std;

int main() {
    int a=20;
    ++a=10;
    cout<<a<<endl;
    --a=15;
    cout<<a<<endl;
    return 0;
}

// How ++a is Different From a++ as lvalue?
// It is because ++a returns an lvalue, which is basically a reference to the variable to which we can further assign — just like an ordinary variable. It could also be assigned to a reference as follows:

// int &ref = ++a; // valid
// int &ref = a++; // invalid
// Whereas if you recall how a++ works, it doesn't immediately increment the value it holds. For clarity, you can think of it as getting incremented in the next statement. So what basically happens is that, a++ returns an rvalue, which is basically just a value like the value of an expression that is not stored.