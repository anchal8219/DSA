#include <iostream>
#include <string>

class Person {
protected:
    std::string name;
    int age;

public:
    // Constructor
    Person(const std::string& n, int a) {
        name = n;
        age = a;
    }

    // Function to print person's details
    void printDetails() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};

class Student : public Person {
private:
    std::string department;
    int rollNumber;

public:
    // Constructor
    Student(const std::string& n, int a, const std::string& dept, int roll)
    : Person(n, a) {
    department = dept;
    rollNumber = roll;
}

    // Function to print student's details
    void printDetails() const {
        std::cout << "Student's Details:" << std::endl;
        Person::printDetails();
        std::cout << "Department: " << department << std::endl;
        std::cout << "Roll Number: " << rollNumber << std::endl;
    }
};

int main() {
    // Creating a Student object
    Student student("John", 20, "Computer Science", 101);

    // Printing student's details
    student.printDetails();

    return 0;
}
