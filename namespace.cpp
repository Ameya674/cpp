#include <iostream>
using namespace std;

// A namespace is a container for identifiers, ensuring their uniqueness within a program. 
// It prevents naming conflicts and organizes code for readability and maintainability.

namespace first
{
    int x = 1;
} // namespace first

namespace second
{
    int x = 2;
} // namespace second



int main() {
    
    int x = 0;
    
    cout<<x<<endl;
    cout<<first::x<<endl;
    cout<<second::x<<endl;

    return 0;
}