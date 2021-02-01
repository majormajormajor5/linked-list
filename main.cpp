#include <iostream>
#include "List.h"

int main() {
    List list;

    list.add(1);
    list.add(2);
    list.add(3);

    while (list.current() != nullptr) {
        std::cout << list.current() << std::endl;
        list.next();
    }

    list.rewind();
    std::cout << list.current() << std::endl;

    return 0;
}
