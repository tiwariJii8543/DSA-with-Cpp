#include <iostream>
#include <stdexcept> // Required for standard exceptions
using namespace std;

class BankAccount {
    int balance;
    public:
    BankAccount(int initial_balance) {
        balance = initial_balance;
    }
    void Withdraw(int amount) {
        if (amount <= 0) {            // Check for errors and THROW
            throw invalid_argument("Withdrawal amount must be positive.");
        }
        if (amount > balance) {
            throw runtime_error("Insufficient balance in account!");
        }
        balance -= amount;        // If no errors, proceed with logic
        cout << "Amount withdrawn successfully. Remaining balance: " << balance << endl;
    }
};
int main() {
    BankAccount A1(500);
    try {
        A1.Withdraw(100);
        A1.Withdraw(1000); 
    } 
    catch (const exception& e) { 
        cout << "Caught Error: " << e.what() << endl;
    }
    return 0;
}