# Grocery Tracking Program

## Introduction

The Grocery Tracking Program was developed to assist the Corner Grocer in analyzing daily sales data. The primary purpose of the program is to track the frequency of each grocery item sold throughout the day. This data is crucial for optimizing inventory management, improving store layout, and enhancing customer experience.

## Project Overview

The program processes a text file containing a list of purchased items and calculates how often each item was sold. It then provides the user with several options:
1. Query the frequency of a specific item.
2. Display the frequency of all items.
3. Display a histogram of item frequencies.
4. Exit the program.

The insights provided by the program allow the grocer to make informed decisions regarding stock levels, item placement, and promotional strategies.

## Design Explanation

### Class Design: `GroceryTracker`

The `GroceryTracker` class is the core of the program, responsible for processing data and managing output. Here's a breakdown of its key components:

- **Private Members:**
  - `std::map<std::string, int> itemFrequency`: Stores the frequency of each item sold.
  - `std::string inputFile`: The name of the input file containing the sales data.
  - `std::string outputFile`: The name of the output file used to store the frequency data for backup.

- **Public Methods:**
  - `GroceryTracker(std::string inputFileName, std::string outputFileName)`: Constructor that initializes the file names.
  - `void ProcessData()`: Reads the input file and populates the `itemFrequency` map.
  - `int GetFrequency(std::string item)`: Returns the frequency of a specific item.
  - `void PrintAllFrequencies()`: Prints the frequency of all items.
  - `void PrintHistogram()`: Prints a histogram representing the frequency of each item.
  - `void WriteToFile()`: Writes the frequency data to the output file.

### Data Structures

The program utilizes `std::map` to store item frequencies due to its efficiency in searching, inserting, and updating elements. This choice ensures that the program can handle dynamic data efficiently, making it well-suited for the grocer's needs.

### Main Program Logic

The program features a menu-driven interface that interacts with the `GroceryTracker` class. The user selects an option from the menu, and the corresponding method in the `GroceryTracker` class is executed. This structure ensures clear separation of concerns and makes the code modular and maintainable.

## Code Walkthrough

### Main Function

The `main` function initializes a `GroceryTracker` object with the input and output file names. It then enters a loop that presents the menu and handles user input. Depending on the user's choice, it calls the appropriate method in the `GroceryTracker` class.

### Key Methods

- **`ProcessData()`**: Reads the input file line by line and updates the `itemFrequency` map.
- **`GetFrequency(std::string item)`**: Returns the frequency of a specific item, or `0` if the item is not found.
- **`PrintAllFrequencies()`**: Iterates through the `itemFrequency` map and prints each item and its frequency.
- **`PrintHistogram()`**: Displays a histogram where each item is followed by a number of asterisks representing its frequency.
- **`WriteToFile()`**: Writes the `itemFrequency` data to the `frequency.dat` file for backup.

## How to Run the Program

To run the Grocery Tracking Program, follow these steps:

1. **Compile the Program**:
   - Ensure that you have a C++ compiler installed on your system (e.g., `g++`).
   - Open a terminal or command prompt in the directory containing the program's source files.
   - Compile the program using the following command:
     ```bash
     g++ -o GroceryTracker main.cpp GroceryTracker.cpp
     ```
   - This will generate an executable file named `GroceryTracker`.

2. **Prepare the Input File**:
   - The program requires an input file that contains a list of purchased items, with each item on a new line. Ensure that this file is in the same directory as the executable.

3. **Run the Program**:
   - Run the executable by typing the following command:
     ```bash
     ./GroceryTracker
     ```
   - The program will prompt you to choose from the available menu options. Enter the corresponding number to select an option.

4. **Use the Program**:
   - Follow the on-screen instructions to query item frequencies, display all frequencies, or view a histogram.
   - To exit the program, select the "Exit" option from the menu.

5. **Output File**:
   - The program generates an output file (`frequency.dat`) that contains the frequency data. This file can be used for backup or further analysis.

## Conclusion

The Grocery Tracking Program successfully meets the Corner Grocer's needs by providing a detailed analysis of daily sales data. The program's design, featuring modular code and efficient data structures, ensures that it is both functional and maintainable. This project demonstrates the ability to write professional, well-documented, and readable code while effectively solving a real-world problem.

## References

Stroustrup, B. (2013). *The C++ Programming Language* (4th ed.). Addison-Wesley.
