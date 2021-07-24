#include "Singleton.hpp"
#include <iostream>

template <class T>
void Singleton<T>::testSingleton() {
    std::cout << __func__ << ", " << __LINE__ << ", this = " << this <<std::endl;
}