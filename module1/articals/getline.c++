#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    int t=4;
    while (t--)
    {
        getline(cin,str); //its read the blank line also
    
    //checking the empty condition
    while (str.empty())
    {
        getline(cin,str);
    }
    

        cout<<str<<" : newline"<<endl;
        t--;
    }
    
    return 0;
}