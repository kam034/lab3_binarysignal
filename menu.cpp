#include "menu.h"

void enter_level(int &l) {
    std::cout << "Enter the level -> " << std::endl;
    std::cin >> l;
    while (!std::cin.good() || l != 1 && l != 0) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Please, enter the correct lever (1 or 0) -> " << std::endl;
        std::cin >> l;
    }
}
