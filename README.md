# Bank Management System in C++

This is a console-based application for a simple bank management system, developed in C++. It demonstrates fundamental Object-Oriented Programming (OOP) principles by encapsulating all banking operations within a single class.

## 🚀 Features

This system provides a menu-driven interface for a bank employee to manage customer accounts with the following functionalities:

* **Secure Login**: A simple sign-up and login system for the operator.
* **Create New Account**: Add a new customer record with details like ID, name, address, and initial deposit.
* **Display All Records**: View a complete list of all customer accounts and their details.
* **Search for a Customer**: Find a specific customer's record using their unique ID.
* **Update Information**: Modify the details of an existing customer account.
* **Transactions**:
    * **Deposit**: Add funds to a customer's account.
    * **Withdraw**: Remove funds from a customer's account, with a check for sufficient balance.
* **Logout**: Securely exit the application.

## 🛠️ Concepts Demonstrated

This project was built to practice and showcase core C++ and OOP concepts, including:

* **Object-Oriented Programming**:
    * **Classes and Objects**: A central `Banking` class encapsulates all data and methods.
    * **Data Encapsulation**: Customer data and operations are bundled together.
    * **Member Functions**: All operations are implemented as methods of the class.
* **Data Structures**:
    * **Structs**: To define the `customer` data type.
    * **Arrays**: An array of structs is used to store the customer records.
* **Control Structures**: `switch` statements for menu navigation, and `for`/`while` loops for iterating through records.
* **Basic I/O**: Handling user input and displaying output to the console.

## ⚙️ How to Compile and Run

1.  **Prerequisites**: You need a C++ compiler (like G++).
2.  **Compile the code**: Open your terminal or command prompt and run the following command:
    ```bash
    g++ bankManagementSystem.cpp -o bank
    ```
3.  **Run the executable**:
    ```bash
    ./bank
    ```
