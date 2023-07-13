#include <iostream>

int main() {
    int x = 5;
    std::cout << "x = " << x << std::endl;
    x = 10000000000; // giá trị vượt quá phạm vi của kiểu int
    std::cout << "x = " << x << std::endl;
    return 0;
}