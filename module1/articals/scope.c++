// There are mainly two types of variable scopes: 

// Local Variables
// Global Variables

#include <bits/stdc++.h>
using namespace std;
int a=5; //gloabl var

int main() {
    int a=2; //local var
    cout<<"Value of global a is "<<::a<<endl;
    cout<<"Value of local a is "<<a<<endl;
    return 0;
}