#ifndef GROCERYTRACKER_H
#define GROCERYTRACKER_H

#include <map>
#include <string>
#include <fstream>
#include <iostream>

class GroceryTracker {
private:
    std::map<std::string, int> itemFrequency; // Map to store item frequencies
    void LoadData(const std::string& filename); // Helper function to load data from the file

public:
    GroceryTracker(); // Constructor to initialize and load data
    int QueryFrequency(const std::string& item); // Query the frequency of a specific item
    void PrintAllFrequencies(); // Print all items with their frequencies
    void PrintHistogram(); // Print histogram representation
    void SaveDataToFile(const std::string& filename); // Save frequency data to a file
};

#endif
