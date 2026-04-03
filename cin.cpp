#include <iostream>

// Accepts three integers and outputs them to the console
int main(){
    int num1{};
    int num2{};
    int num3{};
    std::cout << "Enter three numbers: ";
    std::cin >> num1 >> num2 >> num3;

    std::cout << "You entered " << num1 << ", " << num2 << ", " << num3 << ".\n";

    return 0;
}