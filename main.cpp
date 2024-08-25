#include "GroceryTracker.h"
#include <iostream>
#include <limits>

int main() {
    GroceryTracker tracker; // Initialize the GroceryTracker
    tracker.SaveDataToFile("frequency.dat"); // Save the initial data to frequency.dat
    
    int choice;
    std::string item;
    
    do {
        std::cout << "Menu:\n";
        std::cout << "1. Query Item Frequency\n";
        std::cout << "2. Print All Item Frequencies\n";
        std::cout << "3. Print Histogram\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        
        std::cin >> choice;
        
        switch (choice) {
            case 1:
                std::cout << "Enter the item name: ";
                std::cin >> item;
                std::cout << "Frequency of " << item << ": " << tracker.QueryFrequency(item) << std::endl;
                break;
            case 2:
                tracker.PrintAllFrequencies();
                break;
            case 3:
                tracker.PrintHistogram();
                break;
            case 4:
                std::cout << "Exiting program." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
        
        std::cin.clear(); // Clear any error flags
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
    } while (choice != 4);
    
    return 0;
}
