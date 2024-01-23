#include <iostream>

int fourthBit(int n) {
    // Convert the decimal number to binary
    // int binaryNumber = 0, remainder, base = 1, fourthBitValue;

    // while (number > 0) {
    //     remainder = number % 2;
    //     binaryNumber += remainder * base;
    //     number /= 2;
    //     base *= 10;
    // }

    // // Extract the value of the 4th least significant digit
    // fourthBitValue = (binaryNumber / 1000) % 10;

    return (n>>3)&1;
}

int main() {
    // Example usage
    int number = 77;
    int result = fourthBit(number);

    std::cout << "The value of the 4th least significant digit in the binary representation of " << number << " is: " << result << std::endl;

    return 0;
}