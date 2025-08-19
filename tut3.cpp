#include <iostream>
#include <string>
using namespace std;

// Base Class
class Staff {
protected:
    string name, department;
    int id;
public:
    void accept() {
        cout << "Enter ID: ";
        cin >> id;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Department: ";
        getline(cin, department);
    }

    void display() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
    }
};

// Derived Class Teacher
class Teacher : public Staff {
    string subject;
    int experience;
public:
    void accept1() {
        cout << "\nEnter Teacher Details:\n";
        Staff::accept();
        cout << "Enter Subject: ";
        getline(cin, subject);
        cout << "Enter Experience (years): ";
        cin >> experience;
        cin.ignore();
    }

    void display1() {
        cout << "\n--- Teacher Details ---\n";
        Staff::display();
        cout << "Subject: " << subject << endl;
        cout << "Experience: " << experience << " years" << endl;
    }
};

// Derived Class Administrator
class Administrator : public Staff {
    string position;
    int yearsService;
public:
    void accept2() {
        cout << "\nEnter Administrator Details:\n";
        Staff::accept();
        cout << "Enter Position: ";
        getline(cin, position);
        cout << "Enter Years of Service: ";
        cin >> yearsService;
        cin.ignore();
    }

    void display2() {
        cout << "\n--- Administrator Details ---\n";
        Staff::display();
        cout << "Position: " << position << endl;
        cout << "Years of Service: " << yearsService << endl;
    }
};

// Derived Class SupportStaff
class SupportStaff : public Staff {
    string work;
public:
    void accept3() {
        cout << "\nEnter Support Staff Details:\n";
        Staff::accept();
        cout << "Enter Work: ";
        getline(cin, work);
    }

    void display3() {
        cout << "\n--- Support Staff Details ---\n";
        Staff::display();
        cout << "Work: " << work << endl;
    }
};

// Main Program
int main() {
    int ch, n, i;
    Teacher teacherArr[10];
    Administrator adminArr[10];
    SupportStaff supportArr[10];

    do {
        cout << "\n===== STAFF DATABASE MENU =====\n";
        cout << "1. Enter Teacher Information\n";
        cout << "2. Enter Administrator Information\n";
        cout << "3. Enter Support Staff Information\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch) {
        case 1:
            cout << "How many Teachers? ::: ";
            cin >> n;
            cin.ignore();
            for (i = 0; i < n; i++) {
                cout << "\nTeacher " << i + 1 << ":\n";
                teacherArr[i].accept1();
            }
            cout << "\n--- All Teachers ---\n";
            for (i = 0; i < n; i++) {
                teacherArr[i].display1();
            }
            break;

        case 2:
            cout << "How many Administrators? ";
            cin >> n;
            cin.ignore();
            for (i = 0; i < n; i++) {
                cout << "\nAdministrator " << i + 1 << ":\n";
                adminArr[i].accept2();
            }
            cout << "\n--- All Administrators ---\n";
            for (i = 0; i < n; i++) {
                adminArr[i].display2();
            }
            break;

        case 3:
            cout << "How many Support Staff? ";
            cin >> n;
            cin.ignore();
            for (i = 0; i < n; i++) {
                cout << "\nSupport Staff " << i + 1 << ":\n";
                supportArr[i].accept3();
            }
            cout << "\n--- All Support Staff ---\n";
            for (i = 0; i < n; i++) {
                supportArr[i].display3();
            }
            break;

        case 4:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice. Try again.\n";
        }
    } while (ch != 4);

    return 0;
}
