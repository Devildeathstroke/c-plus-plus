// Here we can see that more than one variables 
// are being used without reporting any error.
// That is because they are declared in the 
// different namespaces and scopes.
// #include <iostream>
// using namespace std;

// // Variable created inside namespace
// namespace first
// {
//     int val = 500;
// }

// // Global variable
// int val = 100;

// int main()
// {
//     // Local variable
//     cout<<val<<" ";
//     int val = 200;

//     // These variables can be accessed from
//     // outside the namespace using the scope
//     // operator ::
//     cout << first::val << '\n'; 
//     cout <<val;
//     return 0;
// }


//// Let us see how namespace scope the entities including variable and functions:

// #include <iostream>
// using namespace std;// std:: cout this will also work for cout 

// namespace first{
//     void func(){
//         cout<<"Inside first namespace"<<endl;
//     }
// }
// namespace second{
//     void func(){
//         cout<<"Inside second namespace"<<endl;
//     }
// }
// int main(){
//     first::func();
//     second::func();

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    return 0;
}


