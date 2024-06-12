#include <iostream>

int main() {
    int number;

    // دریافت عدد از ورودی
    std::cout << "Enter a number: ";
    std::cin >> number;

    // چاپ مضارب عدد تا 100
    std::cout << "Multiples of " << number << " up to 100 are: " << std::endl;
    for (int i = 1; i * number <= 100; ++i) {
        std::cout << i * number << " ";
    }

    // خط جدید برای خوانایی بهتر خروجی
    std::cout << std::endl;

    return 0;
}
