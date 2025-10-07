//Dan Solberg
//CPSCI--272
//10/6/2025
#include <iostream>
#include "ServiceAccount.h"

/**
 * @brief Main function demonstrating ServiceAccount operator overloading
 * * This program demonstrates the functionality of the ServiceAccount class,
 * specifically testing the overloaded equality (==), greater-than (>), and
 * less-than (<) operators based on account balance.
 * * @return 0 on successful execution
 */
int main() {
    using namespace std;

    // Create first ServiceAccount with identifier "0112", password "password", and balance $1000.00
    ServiceAccount a("0112", "password", 1000.00);

    // Create second ServiceAccount with identifier "9098", same password, and same balance $1000.00
    ServiceAccount b("9098", "password", 1000.00);

    // Test equality operator (==) - compares accounts based on balance only
    cout << "// Test equality operator (==)" << endl;
    if (a == b)
        cout << "Accounts are equal" << endl;
    else
        cout << "Accounts are not equal" << endl;

    // Modify account 'a' balance to $10.00 to demonstrate the greater-than operator
    a.setBalance(10.00);

    // Test greater-than operator (>) - compares accounts based on balance only
    cout << "\n// Test greater-than operator (>)" << endl;
    if (a > b)
        cout << "Account a has more money" << endl;
    else
        cout << "Account b has more money" << endl;

    // Test less-than operator (<) - NEW REQUIREMENT
    cout << "\n// Test less-than operator (<)" << endl;
    if (a < b) {
        cout << "Account a has the lower balance: $" << a.getBalance() << endl;
    }
    else {
        cout << "Account b has the lower balance: $" << b.getBalance() << endl;
    }

    return 0;  // Indicate successful program execution
}
