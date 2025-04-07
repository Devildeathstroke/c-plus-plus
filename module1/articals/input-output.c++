// Input Stream: If the direction of flow of bytes is from the device(for example, Keyboard) to the main memory then this process is called input.
// Output Stream: If the direction of flow of bytes is opposite, i.e. from main memory to device( display screen ) then this process is called output.

// Header files available in C++ for Input/Output operations are: 

// iostream: iostream stands for standard input-output stream. This header file contains definitions of objects like cin, cout, cerr, etc.
// iomanip: iomanip stands for input-output manipulators. The methods declared in these files are used for manipulating streams. This file contains definitions of setw, setprecision, etc.
// fstream: This header file mainly describes the file stream. This header file is used to handle the data being read from a file as input or data being written into the file as output.


#include <iostream>
using namespace std;

int main() {
    cout<<"Learning C ++ "<<endl;
    int age;
    cout<<"Enter your age:"<<endl;
    cin>>age;
    cout<<"Your age is: "<<age<<endl;
    return 0;
}