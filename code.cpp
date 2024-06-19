//OOPS PROJECT 
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h>
#include <dos.h>
#include <iomanip> 

using namespace std;

class customer {
private:
public:
    string customername;
    string carmodel;
    string carnumber;
    char data;
};

class rent : public customer {
public:
    int days = 0, rentalfee = 0;

    void data() {
        int login();
        login();
        cout << "\t\t\t\tPlease Enter your Name: ";
        cin >> customername;
        cout << endl;
        do {
            cout << "\t\t\t\tPlease Select a Car" << endl;
            cout << "\t\t\t\tEnter 'A' for Tesla." << endl;
            cout << "\t\t\t\tEnter 'B' for Hyundai 500." << endl;
            cout << "\t\t\t\tEnter 'C' for Ford." << endl;
            cout << "\t\t\t\tEnter 'D' for Maruti Suzuki 800." << endl;
            cout << "\t\t\t\tEnter 'E' for Tata Tiago." << endl;
            cout << "\t\t\t\tEnter 'F' for Renault Duster." << endl;
            cout << endl;
            cout << "\t\t\t\tChoose a Car from the above options: ";
            cin >> carmodel;
            cout << endl;
            cout << "--------------------------------------------------------------------------" << endl;

            if (carmodel == "A") {
                system("CLS");
                cout << "You have chosen Tesla model 2011" << endl;
                cout << "Details for Tesla 20011:" << endl;
                cout << "Color: Blue" << endl;
                cout << "Seating capacity: 4" << endl;
                cout << "Gas mileage: 30 mpg" << endl;
                cout << "Price per day: $56" << endl;
                sleep(2);
            } else if (carmodel == "B") {
                system("CLS");
                cout << "You have chosen Hyundai model 2015" << endl;
                cout << "Details for Hyundai 2015:" << endl;
                cout << "Color: Black" << endl;
                cout << "Seating capacity: 5" << endl;
                cout << "Gas mileage: 25 mpg" << endl;
                cout << "Price per day: $60" << endl;
                sleep(2);
            } else if (carmodel == "C") {
                system("CLS");
                cout << "You have chosen Ford model 2017" << endl;
                cout << "Details for Ford 2017:" << endl;
                cout << "Color: Red" << endl;
                cout << "Seating capacity: 5" << endl;
                cout << "Gas mileage: 28 mpg" << endl;
                cout << "Price per day: $75" << endl;
                sleep(2);
            } 
            else if (carmodel == "D") {
                system("CLS");
                cout << "You have chosen Tata Tiago" << endl;
                cout << "Details for Tata Tiago" << endl;
                cout << "Color: Blue" << endl;
                cout << "Seating capacity: 6" << endl;
                cout << "Gas mileage: 17 mpg" << endl;
                cout << "Price per day: $63" << endl;
                sleep(2);
            } 
            else if (carmodel == "E") {
                system("CLS");
                cout << "You have chosen Ford model 2017" << endl;
                cout << "Details for Ford 2017:" << endl;
                cout << "Color: Red" << endl;
                cout << "Seating capacity: 5" << endl;
                cout << "Gas mileage: 28 mpg" << endl;
                cout << "Price per day: $90" << endl;
                sleep(2);
            } 
            else if (carmodel == "F") {
                system("CLS");
                cout << "You have chosen Renault Duster" << endl;
                cout << "Details for Renault Duster" << endl;
                cout << "Color: Green" << endl;
                cout << "Seating capacity: 5" << endl;
                cout << "Gas mileage: 30 mpg" << endl;
                cout << "Price per day: $70" << endl;
                sleep(2);
            } else {
                cout << "Invalid Car Model. Please try again!" << endl;
            }
        } while (carmodel != "A" && carmodel != "B" && carmodel != "C" && carmodel != "D" && carmodel != "E" && carmodel != "F" );

        cout << "--------------------------------------------------------------------------" << endl;
        cout << "Please provide the following information: " << endl;
        cout << "Please select a Car No. : ";
        cin >> carnumber;
        cout << "Number of days you wish to rent the car : ";
        cin >> days;
        cout << endl;
    }

    void calculate() {
        sleep(1);
        system("CLS");
        cout << "Calculating rent. Please wait......" << endl;
        sleep(2);

        if (carmodel == "A")
            rentalfee = days * 56;
        else if (carmodel == "B")
            rentalfee = days * 60;
        else if (carmodel == "C")
            rentalfee = days * 75;
        else if (carmodel == "D")
            rentalfee = days * 63;
        else if (carmodel == "E")
            rentalfee = days * 90;
        else if (carmodel == "F")
            rentalfee = days * 70;
    }

    void showrent() {
        cout << "\n\t\t                       Car Rental - Customer Invoice                  " << endl;
        cout << "\t\t    ///////////////////////////////////////////////////////////" << endl;
        cout << "\t\t    | Invoice No. :              |           #Cnb81353            |" << endl;
        cout << "\t\t    | Customer Name:             |          " << setw(10) << customername << "           |" << endl;
        cout << "\t\t    | Car Model :                |          " << setw(10) << carmodel << "           |" << endl;
        cout << "\t\t    | Car No. :                  |          " << setw(10) << carnumber << "           |" << endl;
        cout << "\t\t    | Number of days :           |          " << setw(10) << days << "           |" << endl;
        cout << "\t\t    | Your Rental Amount is :    |          " << setw(10) << rentalfee << "           |" << endl;
        cout << "\t\t    | Caution Money :            |          " << setw(10) << "0" << "           |" << endl;
        cout << "\t\t    | Advanced :                 |          " << setw(10) << "0" << "           |" << endl;
        cout << "\t\t    ____________________" << endl;
        cout << "\n";
        cout << "\t\t    | Total Rental Amount is :   |          " << setw(10) << rentalfee << "           |" << endl;
        cout << "\t\t    ____________________" << endl;
        cout << "\t\t    # This is a computer generated invoice and it does not" << endl;
        cout << "\t\t    require an authorized signature #" << endl;
        cout << " " << endl;
        cout << "\t\t    ///////////////////////////////////////////////////////////" << endl;
        cout << "\t\t    You are advised to pay up the amount before the due date." << endl;
        cout << "\t\t    Otherwise, penalty fees will be applied." << endl;
        cout << "\t\t    ///////////////////////////////////////////////////////////" << endl;
        int f;
        system("PAUSE");
        system("CLS");
        cout << "Thank you for using our car rental service!" << endl;
        cout << "Have a safe journey!" << endl;
    }
};

class welcome {
public:
    int welcum() {
        cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t       CAR RENTAL SYSTEM \n\n";
        cout << "\t\t\t\t\t------------------------------";
        cout << "\n\t\t\t\t\t\t     WELCOME \n";
        cout << "\t\t\t\t\t------------------------------\n\n";
        sleep(1);
        cout << "\nStarting the program please wait....." << endl;
        sleep(1);
        cout << "\nloading up files....." << endl;
        sleep(1);
        system("CLS");
    }
};

int login() {
    string pass = "";
    char ch;
    cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t       CAR RENTAL SYSTEM \n\n";
    cout << "\t\t\t\t\t------------------------------";
    cout << "\n\t\t\t\t\t\t     LOGIN \n";
    cout << "\t\t\t\t\t------------------------------\n\n";
    cout << "\t\t\t\t\tEnter Password: ";
    ch = _getch();
    while (ch != 13) {
        pass.push_back(ch);
        cout << '*';
        ch = _getch();
    }
    if (pass == "pass") {
        cout << "\n\n\n\t\t\t\t\t\tAccess Granted! \n";
        system("PAUSE");
        system("CLS");
    } else {
        cout << "\n\n\t\t\t\t\t\t\tAccess Aborted...\n\t\t\t\t\t\t\tPlease Try Again\n\n";
        system("PAUSE");
        system("CLS");
        login();
    }
}

int main() {
    welcome obj1;
    obj1.welcum();

    rent obj2;
    obj2.data();
    obj2.calculate();
    obj2.showrent();
    return 0;
}
