// 16 Вариант, 2 задание
//
// Дано трехзначное число. Занулить единицы и десятки в числе и вывести результат (пример: 123 →> 100).
//
//
//

#include <iostream>

int main() {
    int number;
    std::cout << "Введите число: ";
    std::cin >> number;

    // Заменяем последние две цифры на нули
    number = number / 100 * 100;

    std::cout << "Полученное число: " << number << std::endl;

    return 0;
}



