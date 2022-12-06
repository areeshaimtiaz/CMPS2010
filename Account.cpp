// Section 13.13 - OOP Case Study: Bank Account

#include "Account.h"
#include <iostream>
#include <cctype>
#include <iomanip>
using namespace std;

// Function prototypes
void displayMenu();
void makeDeposit(Account &);
void withdraw(Account &);

int main()
{
    Account savings; // instance called 'savings' created of type Account
    char choice; // Choice of the menu-driven program

    // Set precision to 2 d.p
    cout << fixed << showpoint << setprecision(2);

    // Display the menu and get a valid selection
    do
    {
        displayMenu();
        cin >> choice;
        while ((toupper(choice) < 'A') || (toupper(choice) > 'G')) // Validate the choice entered by the user for the menu-driven program
        {
            cout << "Invalid choice! Try again.\n";
            cin >> choice;
        }

        // Process the user's choice
        switch (choice)
        {
            case 'a':
            case 'A':
                cout << "The current balance is: $" << savings.getBalance << endl; // Displays the current balance
                break;
            case 'b':
            case 'B':
                cout << "There have been " << savings.getTransactions() << " transactions\n"; // Displays the number of transactions
                break;
            case 'c':
            case 'C':
                cout << "Interest earned for this period: " << savings.getInterest() << endl; // Interested earned in the current period
                break;
            case 'd':
            case 'D':
                makeDesposit(savings); // Make a deposit
                break;
            case 'e':
            case 'E':
                withdraw(savings); // Make a withdrawal
                break;
            case 'f':
            case 'F':
                savings.calcInterest(); // Add interest for this period to the current balance
                cout << "Interest added\n";
                break;
        }
    } while (toupper(choice) != 'G');
    return 0;
}

void displayMenu()
{
    cout << "MENU\n";
    cout << "A. Display the account balance\n";
    cout << "B. Display the number of transactions\n";
    cout << "C. Display interest earned for this period\n";
    cout << "D. Make a deposit\n";
    cout << "E. Make a withdrawal\n"
    cout << "F. Add interest for this period\n";
    cout << "G. Exit the program\n\n";
    cout << "Choice: ";
}

void makeDeposit(Account &acc) // It is referenced to the account object. User is asked about the amount to deposit and the makeDeposit() public member function is called
{
    double dollars;
    cout << "Enter the amount of the deposit: "
    cin >> dollars;
    cin.ignore(); // What is that// ?
    acc.makeDeposit(dollars);
}

void withdraw(Account &acc) // It is referenced to the account object. User is asked about the amount to withdraw and the withdraw() public member function is called
{
    double dollars;
    count << "Enter the amount of the withdrawal: "
    cin >> dollars;
    cin.ignore();
    if (acc.withdraw(dollars))
    {
        cout << "Error! Withdrawal amount is too large\n\n";
    }
}