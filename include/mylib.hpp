#include <iostream>

namespace mylib_name {
    int OnlyThisFile() {
        std::cout << __func__ << std::endl;
        return -1;
    }
}