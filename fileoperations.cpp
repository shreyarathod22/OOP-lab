#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Inventory {
    string name;
    string id;
    int quantity;
    double price;
public:
    void accept() {
        cout << "Enter the name of item: ";
        cin >> name;
        cout << "Enter the ID: ";
        cin >> id;
        cout << "Enter the quantity of item: ";
        cin >> quantity;
        cout << "Enter the price per item: ";
        cin >> price;
    }
    void display() {
        cout << "\nName: " << name;
        cout << "\nID of Item: " << id;
        cout << "\nQuantity: " << quantity;
        cout << "\nPrice: " << price;
        cout << "\nTotal Price: " << quantity * price << endl;
    }
    string getID() {
        return id;
    }
};
int main() {
    int n;
    cout << "Enter the number of items you want to add in Inventory: ";
    cin >> n;
    Inventory item[n];
    fstream file;
    file.open("Stock.txt", ios::out);
    if (!file) {
        cout << "Error opening file for writing!" << endl;
        return 1;
    }
    cout << "\nEnter the details of " << n << " items:\n";
    for (int i = 0; i < n; i++) {
        cout << "\nItem " << i + 1 << ":\n";
        item[i].accept();
        file.write((char*)&item[i], sizeof(item[i]));
    }
    file.close();
    file.open("Stock.txt", ios::in);
    if (!file) {
        cout << "Error opening file for reading!" << endl;
        return 1;
    }


    cout << "\nDisplaying Inventory Information:\n";
    for (int i = 0; i < n; i++) {
        file.read((char*)&item[i], sizeof(item[i]));
        item[i].display();
    }
    file.close();
    return 0;
}


