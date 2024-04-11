#include <bits/stdc++.h>
using namespace std;

int main() {
    // Create a vector of integers
    std::vector<int> vec = {10, 20, 30, 30,40, 50};

    // Value to search for
    // int value_to_find = 30;

    // Use std::find to search for the value
    auto it = std::find(vec.begin(), vec.end(),30);
    cout<<*it<<endl;

    // Check if the value was found
    // if (it != vec.end()) {
        
    //     // std::cout << "Value " << " found at index " << std::distance(vec.begin(), it) << std::endl;
    //     cout<<*it;
    // } else {
    //     std::cout << "Value " << " not found in the vector." << std::endl;
    // }

    return 0;
}
