#include <iostream>
#include <vector>
#include <sstream>

// Function to read a 2D vector from standard input
std::vector<std::vector<double>> read2DVector() {
    std::vector<std::vector<double>> vec;
    std::string line;

    // Read each line of input
    while (std::getline(std::cin, line)) {
        std::vector<double> row;
        std::istringstream iss(line);
        double num;
        
        // Read each number in the line
        while (iss >> num) {
            row.push_back(num);
        }
        
        // Add the row to the 2D vector
        vec.push_back(row);
    }

    return vec;
}

int main() {
    std::cout << "Enter your 2D vector (press Ctrl+D to end input):" << std::endl;

    // Read the 2D vector from standard input
    std::vector<std::vector<double>> vec = read2DVector();

    // Print the 2D vector
    std::cout << "{" << std::endl;
    for (const auto& row : vec) {
        std::cout << "    {";
        for (size_t i = 0; i < row.size(); ++i) {
            std::cout << row[i];
            if (i < row.size() - 1) {
                std::cout << ", ";
            }
        }
        std::cout << "}," << std::endl;
    }
    std::cout << "}" << std::endl;

    return 0;
}
