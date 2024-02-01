#include <iostream>
using namespace std;


int maximizingXor(int lo, int hi, int k) {
    int max_xor = 0, result = 0;

    for (int a = lo; a <= hi; ++a) {
        for (int b = a + 1; b <= hi; ++b) {
            int current_xor = a ^ b;
            if (current_xor > max_xor && current_xor <= k) {
                max_xor = current_xor;
                result = a * b;
            }
        }
    }

    return result;
}



int main() {
    // Example usage
    int lo = 10, hi = 80, k = 19;
    int result = maximizingXor(lo, hi, k);

    cout << "The maximum value of a * b for a XOR b <= " << k << " is: " << result << endl;

    return 0;
}