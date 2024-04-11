#include <iostream>
using namespace std;

int fourthBit(int n) {
    return (n>>3)&1;
}

int main() {
    // Example usage
    int number = 77;
    int result = fourthBit(number);

    std::cout << "The value of the 4th least significant digit in the binary representation of " << number << " is: " << result << std::endl;

    return 0;
}