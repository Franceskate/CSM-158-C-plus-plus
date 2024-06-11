#include <iostream>

using namespace std;

#include <iostream>
#include <vector>
#include <string>
#include <sstream>

int main() {
    int numberOfClassmates;
    std::cout << "Enter the number of classmates: ";
    std::cin >> numberOfClassmates;

    std::vector<int> ages(numberOfClassmates);
    std::vector<int> marks(numberOfClassmates);

    // Taking input for ages and marks
    for (int i = 0; i < numberOfClassmates; ++i) {
        std::cout << "Enter age of classmate " << i + 1 << ": ";
        std::cin >> ages[i];
        std::cout << "Enter marks of classmate " << i + 1 << ": ";
        std::cin >> marks[i];
    }

    std::ostringstream concatenatedResult;

    // Concatenating ages and marks into a single string
    for (int i = 0; i < numberOfClassmates; ++i) {
        concatenatedResult << "Classmate " << i + 1 << ": Age = " << ages[i] << ", Marks = " << marks[i] << "\n";
    }

    std::cout << "\nConcatenated result:\n" << concatenatedResult.str();

    return 0;
}

