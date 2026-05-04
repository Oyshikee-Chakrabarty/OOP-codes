#include <iostream>
using namespace std;

class office {
public:
    string name;
    int age;
    int basesalary;
    float totalsalary;
    string dateOfJoining;

    void input();
    float calculate();
    void output();
};

void office::input() {
    cin.ignore();

    cout << "Enter employee name: ";
    getline(cin, name);

    cout << "Employee's age: ";
    cin >> age;

    cout << "Enter employee base salary: ";
    cin >> basesalary;

    cin.ignore();

    cout << "Enter Date of Joining (DD/MM/YYYY): ";
    getline(cin, dateOfJoining);
}

float office::calculate() {
    totalsalary = basesalary + basesalary * 0.4 + basesalary * 0.15 + 2000;
    return totalsalary;
}

void office::output() {
    cout << "\nName: " << name << "\n";
    cout << "Age: " << age << "\n";
    cout << "Base Salary: " << basesalary << "\n";
    cout << "Total Salary: " << calculate() << "\n";
    cout << "Date of Joining: " << dateOfJoining << "\n";
    cout << "----------------------------------\n";
}

int main() {
    office employee[2];

    for(int i = 0; i < 2; i++) {
        cout << "\nEmployee no: " << i + 1 << "\n";
        employee[i].input();
    }

    cout << "\nEmployee details...\n";

    for(int i = 0; i < 2; i++) {
        cout << "\nEmployee details no: " << i + 1 << "\n";
        employee[i].output();
    }

    return 0;
}
