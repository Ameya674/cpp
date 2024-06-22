#include <iostream>
#include <vector>

// used to create a new identifier for a new or existing datatype

// creating a typedef using typdef keyword
typedef std::vector<std::pair<std::string, int>> pairList_t;

// creating a typedef using 'using' keyword
using text_t = std::string;

int main() {
    
    pairList_t pairList;
    text_t name;
    return 0;
}