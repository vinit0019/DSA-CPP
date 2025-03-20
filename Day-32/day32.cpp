#include <iostream>
using namespace std;

void deposit(float &balance) {
    float amount;
    cout << "Enter the amount to deposit: ";
    cin >> amount;
    if (amount > 0) {
        balance += amount;
        cout << "Deposit successful. Your new balance is: " << balance << endl;
    } else {
        cout << "Amount must be greater than zero.\n";
    }
}

void withdraw(float &balance) {
    float amount;
    cout << "Enter the amount to withdraw: ";
    cin >> amount;
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        cout << "Withdrawal successful. Your new balance is: " << balance << endl;
    } else if (amount > balance) {
        cout << "Insufficient balance.\n";
    } else {
        cout << "Amount must be greater than zero.\n";
    }
}

void checkBalance(float balance) {
    cout << "Your current balance is: " << balance << endl;
}


int main() {
    float balance = 0.0;
    int choice;

    while (true) {
        
        cout << "==== Simple Banking System ===\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                deposit(balance); 
                break;
            case 2:
            if (balance <= 0)
            {
                cout << endl;
               cout << "Bank Balence is 0" << endl << "deposit the amount first." << endl;
            }
            else
            {
                withdraw(balance); 
            }
                break;
            case 3:
            if (balance <= 0)
            {
                cout << endl;
               cout << "Bank Balence is 0" << endl << "deposit the amount first." << endl;
            }
            else
            {
                checkBalance(balance); 
            }
                break;
            case 4:
            cout << endl;
                cout << "Thank you for using the banking system! Goodbye." << endl;
                return 0; 
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }
    return 0;
}


