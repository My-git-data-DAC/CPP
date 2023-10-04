
// Write a class to store Account information of Bank customer by using following class diagram.
// Use enum to store information of account type. Create an array of 5 Accounts in main() and accept
// their details from user. Write Menu driven program to deposit/withdraw amount from the account.
// After each transaction display updated account balance. Provide appropriate getters/setters with
// necessary validations. Throw exceptions for invalid values. Also implement an exception class
// InsufficientFunds. In withdraw() member function, if sufficient balance is not available
// in account, throw this exception.

#include <iostream>
using namespace std;

enum accountType
{

    SAVING = 1,
    CURRENT = 2,
    DMAT = 3,

};

class account
{
private:
    int id;
    accountType type;
    double balance;

public:
    account() : id(0), type(SAVING), balance(0.0)
    {
    }

    account(double balance, int id, accountType type)
    {
        this->balance = balance;
        this->id = id;
        this->type = type;
    }

    void accept()
    {
        int choice;
        cout << "Enter the bank account details..." << endl;
        cout << "Enter the ID..." << endl;
        cin >> this->id;
        cout << "Enter the Bank account type..." << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            this->type = SAVING;
            break;
        case 2:
            this->type = CURRENT;
            break;
        case 3:
            this->type = DMAT;
            break;
        default:
            cout << "Wrong choice..." << endl;
            break;
        }
    }

    void display()
    {
        cout << "Bank account details are..." << endl;
        cout << "ID : " << this->id << endl;
        cout << "ACCOUNT TYPE : " << this->type << endl;
        cout << "BALANCE : " << this->balance << endl;
    }

    void setId(int id)
    {
        this->id = id;
    }

    void setType(accountType type)
    {
        this->type = type;
    }

    int getId()
    {
        return this->id;
    }

    accountType getType()
    {
        return this->type;
    }

    double getBalanace()
    {
        return this->balance;
    }

    void deposit()
    {
        double amount;
        cout << "Enter the Amount you want to deposit :" << endl;
        cin >> amount;
        if (this->type == SAVING && amount > 100000)
        {
            cout << "Can't deposit this much amount as SAVING account deposit limit is below 100000" << endl;
        }
        else
        {
            this->balance += amount;
            cout << "Balance : " << this->balance << endl;
        }
    }

    void withdraw()
    {
        double amount, minBal = 1000;

        cout << "Enter the Amount you want to Withdraw :" << endl;
        cin >> amount;
        if (this->balance - amount > minBal && amount < 100000)
        {
            this->balance -= amount;
            cout << "Balance : " << this->balance << endl;
        }
        else
        {
            if (this->balance - amount < minBal)
            {
                cout << "Can't withdraw this much amount as Minimum balance limit has exceeded" << endl;
            }
            else
            {
                cout << "Can't withdraw this much amount as Maximum withdrawal limit has exceeded" << endl;
            }
        }
        // throw "Can't withdraw this much amount as Minimum balance limit exceeded";
        // cout << "Can't withdraw this much amount as Minimum balance limit exceeded" << endl;
    }
};

int main()
{
    account a1;

    return 0;
}