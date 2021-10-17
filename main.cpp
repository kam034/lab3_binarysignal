#include <iostream>
#include "binary_signal.h"
#include "menu.h"
int main() {
    std::cout << "Hello, World!" << std::endl;
    BS::Binary_signal b;
    BS::Status k[0];// = b.get_status(0);
//    std::cin >> b.get_status(0).level;
//    //b.get_status(0) = k[0];
//    std::cout << b.get_status(0).level << std::endl;
    char d[90];
    std::cin >> d;
    BS::Binary_signal c(d);
    return 0;
}