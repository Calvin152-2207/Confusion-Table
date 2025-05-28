#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
std::vector<std::vector<std::string>> readCSV(const std::string& filename) {
    std::vector<std::vector<std::string>> data;
    std::ifstream file(filename);
    std::string line;

    while (std::getline(file, line)) {
        std::vector<std::string> row;
        std::stringstream lineStream(line);
        std::string cell;

        while (std::getline(lineStream, cell, ',')) {
            row.push_back(cell);
        }

        data.push_back(row);
    }

    return data;
}
int main() {
    std::string filename = "C:\\Users\\Cooki\\Downloads\\Test_100 Ag Points - 100 Points.csv"; // Replace with your CSV file name
    std::vector<std::vector<std::string>> data = readCSV(filename);

    // Display the data
    for (const auto& row : data) {
        for (const auto& cell : row) {
            std::cout << cell << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

