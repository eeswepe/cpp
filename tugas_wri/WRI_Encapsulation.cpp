#include <iostream>
#include <string>
#include <stdexcept>

// Define exceptions
class InvalidDataException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Invalid data provided";
    }
};

class InsufficientBalanceException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Insufficient balance";
    }
};

// Define the BankAccount interface
class BankAccount {
public:
    virtual void deposit(double amount) = 0;
    virtual void withdraw(double amount) = 0;
    virtual ~BankAccount() {}
};

// Define the CustomerAccount class
class CustomerAccount : public BankAccount {
private:
    double balance;
    std::string accountHolder;

public:
    // Constructor
    CustomerAccount(const std::string& accountHolder)
        : accountHolder(accountHolder), balance(0.0) {}

    // Getter for account holder
    std::string getAccountHolder() const {
        return accountHolder;
    }

    // Implement deposit
    void deposit(double amount) override {
        if (amount <= 0) {
            throw InvalidDataException();
        }
        balance += amount;
    }

    // Implement withdraw
    void withdraw(double amount) override {
        if (amount <= 0) {
            throw InvalidDataException();
        }
        if (amount > balance) {
            throw InsufficientBalanceException();
        }
        balance -= amount;
    }
    
};

// Main function
int main() {
    BankAccount* account = new CustomerAccount("Fanum");

    try {
        account->deposit(40);
        std::cout << "Deposit 40 Success!" << std::endl;
        account->deposit(-32);
    } catch (const InvalidDataException& e) {
        std::cout << "Amount -32 is invalid!" << std::endl;
    }

    try {
        account->withdraw(34);
        std::cout << "Withdraw 34 Success!" << std::endl;
        account->withdraw(-2);
    } catch (const InvalidDataException& e) {
        std::cout << "Amount -2 is invalid!" << std::endl;
    } catch (const std::exception&) {
        // Catch-all for other exceptions
    }

    try {
        account->withdraw(20);
    } catch (const InsufficientBalanceException& e) {
        std::cout << "Balance is not enough" << std::endl;
    } catch (const std::exception&) {
        // Catch-all for other exceptions
    }

    // Clean up
    delete account;

    // Expected Output:
    // =======================
    // Deposit 40 Success!
    // Amount -32 is invalid!
    // Withdraw 34 Success!
    // Amount -2 is invalid!
    // Balance is not enough
    // =======================

    return 0;
}
