
// Banking app
#include <iostream>
#include <iomanip>

// Function declarations
void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main() {
    int choice;
    double balance = 0;

    do {

        std::cout<< "_______________________\n";
        std::cout<< "Welcome to Gotham Bank\n";
        std::cout<< "_______________________\n";
        std::cout<< "1. Balance\n";
        std::cout<< "2. Deposit\n";
        std::cout<< "3. Withdraw\n";
        std::cout<< "4. Exit\n";
        std::cin>> choice;

        std::cin.clear();
        fflush(stdin);

        switch(choice) {
            case 1: 
                showBalance(balance);
                break;
            case 2: 
                balance += deposit();
                showBalance(balance);
                break;
            case 3:
                balance = withdraw(balance);
                showBalance(balance);
                break;
            case 4:
                std::cout<< "Gotham appreciates your business!\n";
                break;
            default:
                std::cout<< "Invalid choice\n";
        }

    } while (choice != 4);


    return 0;
}

void showBalance(double balance) {
    std::cout<< "Your balance is $" << std::setprecision(2) << std::fixed << balance << '\n';
}

double deposit() {
    double deposit = 0;

    std::cout<< "How much money would you like to deposit today?\n";
    std::cin >> deposit;

    if(deposit < 0){
        std::cout<< "Invalid deposit.";
        return 0;
    } else {
        return deposit;
    }
}

double withdraw(double balance){
    double amount = 0;

    std::cout<< "How much money would you like to withdraw? ";
    std::cin >> amount;

    if(amount > balance) {
        std::cout<< "Insufficient funds.\n";
        return 0;
    } else if(amount < 0) {
        std::cout<< "This is Gotham, you cannot overdraft here.\n";
        return 0;
    } else {
        return (balance - amount);
    }
}


{ o o o o o}
{ o x o o o}
{ o o o o o}
{ o o o o o}