/*Implement a class to illustrate working of a bank account of a
customer that consists of following members Data members:
i. Name of the customer
ii. Account Type
iii. Account Number
iv. Available balance amount in the account
Member Functions:
i. Assign initial values using constructors.
ii. Deposit an amount in account
iii. Withdraw an amount
// iv. Display account details    */

#include <iostream>
#include <string.h>
using namespace std;
class bank_account {
   string name, acctype;
   int accnumber;
   double balance;
public:
   bank_account(string n, string at, int anum, double b) {
           name = n;
           acctype = at;
           accnumber = anum;
           balance = b;
   	}
void accept();
void display();
void deposit();
void withdraw();
};
void bank_account::accept()
{
cout<<"\n Enter name of customer:";
cin>>name;
cout<<"\n Enter account type:";
cin>>acctype;
cout<<"\n Enter the account number:";
cin>>accnumber;
cout<<"\n Enter current balance amount in the account:";
cin>>balance;
}
   void bank_account:: display() {
       cout << "\nAccount Details:\n";
       cout << "Account Holder Name: " << name << endl;
       cout << "Account Type: " << acctype << endl;
       cout << "Account Number: " << accnumber << endl;
       cout << "Balance: $" << balance << endl;
   }
   void bank_account::deposit() {
       float amount;
       cout << "Enter amount to deposit: $";
       cin >> amount;
       if (amount > 0) {
           balance += amount;
           cout << "Amount deposited successfully.\n";
       } else {
           cout << "Invalid deposit amount.\n";
       }
       display();
   }
   void bank_account:: withdraw() {
       float amount;
       cout << "Enter amount to withdraw: $";
       cin >> amount;
       if (amount > 0 && amount <= balance) {
           balance -= amount;
           cout << "Amount withdrawn successfully.\n";
       } else {
           cout << "Insufficient balance or invalid amount.\n";
       }
       display();
   }
int main() {
    string n, at;
    int anum;       
    double b;      
    int choice;
    cout << "Enter your full name: ";
    cin.ignore();             
    getline(cin, n);          
    cout << "Enter account type: ";
    cin >> at;
    cout << "Enter account number: ";
    cin >> anum;
    cout << "Enter initial balance: ";
    cin >> b;
    bank_account obj1(n, at, anum, b);
    obj1.display();
    do {
        cout << "\nMenu\n";
        cout << "1. Display Account Details\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                obj1.display();
                break;
            case 2:
                obj1.deposit();
                break;
            case 3:
                obj1.withdraw();
                break;
            case 4:
                cout << "Thanks for using the bank account system.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);
    return 0;
}














