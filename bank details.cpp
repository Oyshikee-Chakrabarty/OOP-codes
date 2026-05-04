#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

class bank
{
public:
    char name[100];
    int account_no;
    int base;
    double totalprof;
    char typeofacc[100];

    void input();
    double calculate();
    void output();
};

void bank::input()
{
    cin.ignore();

    cout << "Enter account holder's name: ";
    cin.getline(name, 100);

    cout << "Enter holder's account number: ";
    cin >> account_no;

    cin.ignore();

    cout << "Enter type of account: ";
    cin.getline(typeofacc, 100);

    cout << "Enter holder's base amount: ";
    cin >> base;
}

double bank::calculate()
{
    totalprof = base * pow((1 + 0.5), 5);
    return totalprof;
}

void bank::output()
{
    cout << "\nName: " << name << "\n";
    cout << "Account number: " << account_no << "\n";
    cout << "Type of account: " << typeofacc << "\n";
    cout << "Total amount after calculation: " << calculate() << "\n";
    cout << endl;
}

int main()
{
    bank holder[2];

    for (int i = 0; i < 2; i++)
    {
        cout << "\nHolder No: " << i + 1 << "\n";
        holder[i].input();
    }

    cout << "\nAccount holder details:\n";

    for (int i = 0; i < 2; i++)
    {
        cout << "\nInformation of account holder no. " << i + 1 << "\n";
        holder[i].output();
    }

    return 0;
}
