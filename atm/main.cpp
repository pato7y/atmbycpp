#include <iostream>
using namespace std;

void showMenu()
{
    cout << "*******MENU*******" << endl;
    cout << "1. Check balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit" << endl;
    cout << "******************" << endl;
}

int main(int argc, char** argv) {

    double balance = 0.0; 
    double withdrawAmount;
    double depositAmount;
    int option;

    do {
        showMenu();
        cout << "Enter the option to continue: ";
        cin >> option;
        
        switch (option) {
            case 1:
                cout << "Balance is $" << balance << endl;
                break;

            case 2:
                cout << "Enter deposit amount: ";
                cin >> depositAmount;
                balance += depositAmount;
                cout << "Deposit of $" << depositAmount << " successful." << endl;
                break;

            case 3:
                cout << "Enter withdraw amount: ";
                cin >> withdrawAmount;
                if (withdrawAmount <= balance) {
                    balance -= withdrawAmount;
                    cout << "Withdraw of $" << withdrawAmount << " successful." << endl;
                    cout << "Remaining balance is $" << balance << endl;
                } else {
                    cout << "Not enough money in the account." << endl;
                }
                break;

            case 4:
                cout << "Exiting..." << endl;
                break;
                system("cls");

            default:
                cout << "Invalid option. Please choose again." << endl;
                //system("cls");

        }
    } while (option != 4);

    return 0;
}

