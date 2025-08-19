/*Develop a program in C++ to create a database of an
employee's information system containing the following
fields: Name, employee ID, Department, Date of Joining,
Contact address, Telephone number etc. Construct the
database with suitable member functions to accept and
print employee details. Make use of constructor types,
destructor, static members, inline function and dynamic
memory allocation using operators-new and delete*/

#include <iostream>
#include <string>
using namespace std;

class employee_information {
   string name, department, address;
   int emp_id, join_date, teleNum;
private:
   static int count;
public:
   employee_information(string n, string dp, string add, int ei, int jd, int tnum) {
       name = n;
       department = dp;
       address = add;
       emp_id = ei;
       join_date = jd;
       teleNum = tnum;
       cout << "\nParameterised Constructor\n";
   }
   employee_information() {
       name = "Shreya";
       department = "Cs";
       address = "Pune";
       emp_id = 89;
       join_date = 07032007;
       teleNum = 9876543210;
       cout << "Default Constructor\n";
   }

   employee_information(const employee_information& obj) {
        name = obj.name;
        department = obj.department;
        address = obj.address;
        emp_id = obj.emp_id;
        join_date = obj.join_date;
        teleNum = obj.teleNum;
        count++;
        cout << "Copy Constructor\n";
    }

   ~employee_information() {
       cout << "Destructor\n";
   }
   void display() {
       cout << "\nEmployee Information:\n";
       cout << "Employee Name: " << name << endl;
       cout << "Employee Department: " << department << endl;
       cout << "Employee contact address: " << address << endl;
       cout << "Employee Id: " << emp_id << endl;
       cout << "Employee Joining date: " << join_date << endl;
       cout << "Employee telephone number: " << teleNum << endl;
       count++;
   }
   static void show() {
       cout << "All Employee: " << count << endl;
   }
};
int employee_information::count = 0;

int main() {
   string n, dp, add;
   int ei, jd, tnum;
   cout << "Employee name: ";
   cin.ignore();
   getline(cin,n);
   cout << "Employee Department: ";
   cin >>dp;
   cout << "Employee address: ";
   cin >>add;
   cout << "Employee Id: ";
   cin >> ei;
   cout << "Employee joining date (x-y-z as number.): ";
   cin >>jd;
   cout << "Employee telephone number: ";
   cin >>tnum;

   employee_information obj1 (n, dp, add, ei, jd,tnum);
   obj1.display();
   employee_information::show();
   cout << "\n\n";

   employee_information obj2 ;
   obj2.display();
   employee_information::show();
   cout<<"\n\n";

   employee_information obj3(obj2);
   obj3.display();
   employee_information::show();
   cout<<"\n\n";

   	employee_information *ptr=new employee_information (n,  dp,  add,ei, jd,  tnum );
    ptr->display();
    delete ptr;
    employee_information::show();
   	return 0;
 }


