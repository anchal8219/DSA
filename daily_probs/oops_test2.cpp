#include <iostream>

class Time {
private:
    int hour;
    int minute;
    int second;

public:
    // Constructor
    Time(int h, int m, int s) : hour(h), minute(m), second(s) {}

    // Function to compare two Time objects
    bool isEqual(const Time& other) const {
        return hour == other.hour && minute == other.minute && second == other.second;
    }
};

int main() {
    // Creating two Time objects
    Time time1(12, 30, 45);
    Time time2(12, 30, 45);
    
    // Comparing the two Time objects
    if (time1.isEqual(time2)) {
        std::cout << "The times are the same." << std::endl;
    } else {
        std::cout << "The times are different." << std::endl;
    }
    
    return 0;
}
