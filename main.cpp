#include <iostream>

int main() {
    std::cout << "Программа запущена" << std::endl;
    int a = 0;
    int b = 0;
    std::cout << "Введите два целых числа: ";
    std::cin >> a >> b;
    std::cout << "Результат сложения: " << (a - b) << std::endl;
    return 0;
}
