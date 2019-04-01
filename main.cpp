#include <iostream>
#include "interval_map.h"

int main() {
    interval_map<int, char> myMap('a');
    myMap.assign(2, 12, 't');
    myMap.assign(1, 6, 'a');
    myMap.assign(7, 10, 'x');

    for (int i = 0; i < 20; ++i) {
        std::cout << i << " \t " << myMap[i] << std::endl;
    }
    return 0;
}