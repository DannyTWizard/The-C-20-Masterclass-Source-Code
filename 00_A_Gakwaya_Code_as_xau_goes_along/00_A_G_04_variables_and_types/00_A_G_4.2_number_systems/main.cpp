

#include <iostream>

int main(){

    int number1 = 15;
    int number2 = 0b1111;
    int number3 = 0xF;
    int number4 = 017;

    std::cout << "Decimal: " << number1 << std::endl;
    std::cout << "Binary: " << number2 << std::endl;
    std::cout << "Hexadecimal: " << number3 << std::endl;
    std::cout << "Octal: " << number4 << std::endl;
}