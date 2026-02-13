#include <iostream>

//рекурсия на спуске
int rec(int x) {
    if (x == 0) {
        return 0;
    }
    else {
        return x % 10 + rec(x / 10);
    }
}

int main() {
    setlocale(LC_ALL, "rus");
    //в идеале вынести все в отдельные функции: ввод, обработка, вывод
    int x = 0;
    int s = 0;
    std::cout << "введите натуральное число: " << std::endl;
    std::cin >> x;
    //проверка на число
    if (x <= 0) {
        std::cerr << "ошибка: х < 0";
        return 1;
    }

    s = rec(x);
    std::cout << std::endl << "сумма цифр натурального числа:" << s;
    return 0;
}