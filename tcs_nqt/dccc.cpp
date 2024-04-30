#include <iostream>
#include <vector>
#include <utility>

int main() {
    // Declare a vector of pairs
    std::vector<std::pair<int, double>> vecPair;

    // Add elements to the vector
    vecPair.push_back(std::make_pair(1, 3.14));
    vecPair.push_back(std::make_pair(2, 2.718));

    // Access and manipulate elements
    std::cout << "First element of the first pair: " << vecPair[0].first << std::endl;
    std::cout << "Second element of the second pair: " << vecPair[1].second << std::endl;

    return 0;
}
