// What Are Inline Functions?
// An inline function is a special type of function where the compiler attempts to replace the function call with the function’s body during compilation. This avoids the overhead of function calls, such as parameter passing, stack operations, and returning values.

// Syntax:

// To make a function inline, use the inline keyword before the function definition.

// #include <bits/stdc++.h>
// using namespace std;

// inline int getMax(int x,int y){
//     return (x>y) ? x :y;
// }

// int main() {
//     cout<<getMax(10,20);
//     return 0;
// }


// Inline Functions vs. Macros
// Inline functions are often compared to macros because both can replace code at the call site. However, inline functions have significant advantages over macros:

// Type Checking Inline functions perform type checking, while macros do not. This makes inline functions safer and less error-prone.
// Scope and Syntax Inline functions follow the same scoping rules as regular functions, whereas macros are simple text replacements that can lead to unexpected behavior if not written carefully.
// Example Comparison:

// #define add(x, y) x + y

// int main() {
//     cout << 4 * add(10, 20); // Output: 60 (Unexpected result due to lack of parentheses)
//     return 0;
// }

// Here, the macro expands to 4 * 10 + 20, which evaluates as 40 + 20 = 60 instead of the expected 4 * (10 + 20) = 120. This issue does not occur with inline functions.
// Important Facts About Inline Functions
// Compiler's Choice Declaring a function as inline is merely a suggestion to the compiler. The compiler may decide not to inline the function if the function body is too large or if inlining would increase the program size significantly.
// Binary File Size Overusing inline functions in large programs can increase the size of the binary executable because the function code is copied at every call site.
// Inline Functions in Classes When you define a function inside a class, it is automatically considered an inline function.
// Modern Compiler Behavior Modern compilers may inline some functions even if they are not explicitly marked as inline. Conversely, they may ignore the inline keyword for functions that are unsuitable for inlining.