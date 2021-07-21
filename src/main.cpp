#include <iostream>
#include <mylib.hpp>
#include <myoflib.hpp>
#include <vector>
#include <string>
#include "Singleton.hpp"

void printVector(std::vector<std::pair<int, std::string>> v) {
    std::cout << __func__ << std::endl;
    for(auto it : v) {
        std::cout << it.first << ", " << it.second << std::endl;
    }
}

void modifyVector(std::vector<std::pair<int, std::string>> *v) {
    std::cout << __func__ << std::endl;
    (*v).pop_back();
    (*v).emplace_back(std::make_pair(15, "changed"));
}
void modifyVector_2(std::vector<std::pair<int, std::string>> &v) {
    std::cout << __func__ << std::endl;
    v.pop_back();
    v.emplace_back(std::make_pair(25, "reference"));
}

int main() {
    std::vector<std::pair<int, std::string>> mymap;
    std::vector<std::pair<int, std::string>>& ref_mymap = mymap;

    mymap.emplace_back(std::make_pair(0, "node 0"));
    mymap.emplace_back(std::make_pair(2, "node 1"));
    mymap.emplace_back(std::make_pair(3, "node 2"));
    mymap.emplace_back(std::make_pair(1, "node 3"));

    printVector(mymap);
    std::cout << "modify Start 1" << std::endl;
    modifyVector(&ref_mymap);
    printVector(mymap);
    printVector(ref_mymap);

    // Singleton test
    Singleton& scopedInstance = Singleton::getIncetance();

    scopedInstance.testSingleton();

    std::cout << "modify Start 2" << std::endl;
    modifyVector_2(ref_mymap);
    printVector(mymap);
    printVector(ref_mymap);

    mylib_name::OnlyThisFile();
    myoflib_name::OnlyThisFile();

}