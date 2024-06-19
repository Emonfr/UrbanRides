# Car Rental System

This is a C++ console-based Car Rental System project. The system allows customers to rent a car by selecting a model, entering rental details, and calculating the rental fee.

## Features

- **Customer Information**: Collects customer name and car details.
- **Car Selection**: Allows customers to choose from a list of car models.
- **Rental Fee Calculation**: Calculates the rental fee based on the number of days the car is rented.
- **Invoice Generation**: Generates a detailed rental invoice for the customer.
- **Login System**: Secure login system to access the rental system.

## Car Models

The system offers the following car models:
- Tesla (Model 2011)
- Hyundai 500 (Model 2015)
- Ford (Model 2017)
- Maruti Suzuki 800
- Tata Tiago
- Renault Duster

## Technology Used

- **Programming Language**: C++
- **Development Environment**: Any C++ IDE or compiler that supports standard libraries.

## How to Use

1. **Clone the Repository**:
    ```bash
    git clone https://github.com/your-username/car-rental-system.git
    ```

2. **Navigate to the Directory**:
    ```bash
    cd car-rental-system
    ```

3. **Compile and Run**:
    - Use any C++ compiler to compile the code.
    - For example, using g++:
        ```bash
        g++ -o car_rental_system main.cpp
        ./car_rental_system
        ```
    - If using an IDE, open the project file and run it directly from the IDE.

4. **Login**:
    - The default password is `pass`.

5. **Input Details**:
    - Enter your name.
    - Select a car model.
    - Provide the car number and number of rental days.

6. **Invoice Generation**:
    - The system will calculate the rental fee and generate an invoice.

## Sample Usage

```text
CAR RENTAL SYSTEM
------------------------------
WELCOME
------------------------------

Starting the program please wait.....

loading up files.....

CAR RENTAL SYSTEM
------------------------------
LOGIN
------------------------------

Enter Password: ********

Access Granted!

Please Enter your Name: JohnDoe

Please Select a Car
Enter 'A' for Tesla.
Enter 'B' for Hyundai 500.
Enter 'C' for Ford.
Enter 'D' for Maruti Suzuki 800.
Enter 'E' for Tata Tiago.
Enter 'F' for Renault Duster.

Choose a Car from the above options: A

You have chosen Tesla model 2011
Details for Tesla 2011:
Color: Blue
Seating capacity: 4
Gas mileage: 30 mpg
Price per day: $56

Please provide the following information:
Please select a Car No. : XYZ123
Number of days you wish to rent the car : 5

Calculating rent. Please wait......

Car Rental - Customer Invoice
///////////////////////////////////////////////////////////
| Invoice No. :              |           #Cnb81353            |
| Customer Name:             |          JohnDoe           |
| Car Model :                |          A           |
| Car No. :                  |          XYZ123           |
| Number of days :           |          5           |
| Your Rental Amount is :    |          280           |
| Caution Money :            |          0           |
| Advanced :                 |          0           |
____________________

| Total Rental Amount is :   |          280           |
____________________
# This is a computer generated invoice and it does not
require an authorized signature #

///////////////////////////////////////////////////////////
You are advised to pay up the amount before the due date.
Otherwise, penalty fees will be applied.
///////////////////////////////////////////////////////////
Thank you for using our car rental service!
Have a safe journey!
