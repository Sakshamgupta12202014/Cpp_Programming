#include <iostream>
#include <bitset>

int main() {
    int decimalNumber = -5; // Replace this with the desired negative decimal number
    const int numBits = 8;

    // Convert to 8-bit binary using two's complement
    std::bitset<numBits> binaryRepresentation(decimalNumber);

    // Print the binary representation
    std::cout << "Decimal: " << decimalNumber << std::endl;
    std::cout << "8-bit Binary: " << binaryRepresentation << std::endl;

    return 0;
}
#include <iostream>
#include <bitset>

int main() {
    int decimalNumber = 42; // Replace this with your decimal number

    // Convert the decimal number to binary representation
    std::bitset<sizeof(int) * 8> binaryRepresentation(decimalNumber);

    std::cout << "Binary representation of " << decimalNumber << " is: " << binaryRepresentation << std::endl;

    // Perform left shift and right shift
    int leftShifted = decimalNumber << 1; // Left shift by 1 bit
    int rightShifted = decimalNumber >> 1; // Right shift by 1 bit

    std::cout << "After left shifting by 1 bit: " << leftShifted << std::endl;
    std::cout << "After right shifting by 1 bit: " << rightShifted << std::endl;

    return 0;
}