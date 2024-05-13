#include <iostream>
using namespace std;

// The const keyword specifies that the variable has constant value and cannnot be changed. It is read-only. 
// Tells the compiler to prevent anything from modifying it.
// Common naming convention -- Uppercase

int main() {

    const double PI = 3.14;
    double radius = 5;

    cout<<"Area of the circle is "<<PI * radius * radius<<endl;

    return 0;
}
