#include "GroceryTracker.h"

// Constructor that loads data from the input file
GroceryTracker::GroceryTracker() {
    LoadData("CS210_Project_Three_Input_File.txt");
}

// Helper function to load data from the file
void GroceryTracker::LoadData(const std::string& filename) {
    std::ifstream inFile(filename);
    std::string item;
    
    while (inFile >> item) {
        itemFrequency[item]++;
    }
}

// Query the frequency of a specific item
int GroceryTracker::QueryFrequency(const std::string& item) {
    return itemFrequency[item];
}

// Print all items with their frequencies
void GroceryTracker::PrintAllFrequencies() {
    for (const auto& pair : itemFrequency) {
        std::cout << pair.first << " " << pair.second << std::endl;
    }
}

// Print histogram representation of item frequencies
void GroceryTracker::PrintHistogram() {
    for (const auto& pair : itemFrequency) {
        std::cout << pair.first << " ";
        for (int i = 0; i < pair.second; ++i) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

// Save frequency data to a file
void GroceryTracker::SaveDataToFile(const std::string& filename) {
    std::ofstream outFile(filename);
    for (const auto& pair : itemFrequency) {
        outFile << pair.first << " " << pair.second << std::endl;
    }
}
