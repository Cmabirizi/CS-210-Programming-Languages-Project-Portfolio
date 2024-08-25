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

## What Was Done Particularly Well

The project successfully implemented a robust and modular design using the `GroceryTracker` class to handle data processing and output management. The use of `std::map` for storing item frequencies ensured efficient searching and updating of data. The program's menu-driven interface is user-friendly, providing clear options for querying item frequencies, displaying all item frequencies, and viewing histograms. The code is well-commented, making it easy to understand and follow.

## Areas for Enhancement

While the program is functional, there are several areas where improvements could be made:

- **Error Handling:** Adding more comprehensive error handling for file operations and user inputs could make the program more robust. This would prevent crashes or unexpected behavior if the input file is missing or contains invalid data.
- **Data Storage:** Instead of using a text file for output, implementing a database system could allow for more scalable and efficient data storage and querying.
- **User Interface:** Enhancing the user interface with a graphical interface or command-line arguments for better user experience could make the program more versatile and user-friendly.

These improvements would enhance the program's efficiency, security, and usability, making it more suitable for real-world applications.

## Most Challenging Pieces of Code

The most challenging aspect of the code was implementing the histogram display functionality. Creating a visually appealing and accurate histogram required careful handling of output formatting and character representation. Overcoming this challenge involved thorough testing and iterating on the formatting logic to ensure clarity and readability. Additional resources, such as online forums and documentation for C++ output formatting, were invaluable in resolving these issues.

## Transferable Skills

This project has developed several skills that are transferable to other projects or coursework, including:

- **Data Handling:** Experience in processing and managing data efficiently using C++ data structures like `std::map`.
- **Modular Programming:** Creating a well-organized, modular class-based design that can be adapted to other projects.
- **User Interface Design:** Designing a user-friendly menu-driven interface, which is applicable to many software applications.

## Making the Program Maintainable, Readable, and Adaptable

To ensure the program is maintainable and adaptable:

- **Code Organization:** The program is organized into clear, modular components, with separate classes and methods handling distinct functionalities. This separation of concerns makes it easier to update or extend the code in the future.
- **Comments and Documentation:** Comprehensive comments and documentation are provided throughout the code to explain the purpose and functionality of each component. This aids in understanding and maintaining the code.
- **Consistent Style:** Consistent coding style and naming conventions are used, which improves readability and makes it easier for others to collaborate on or review the code.

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
