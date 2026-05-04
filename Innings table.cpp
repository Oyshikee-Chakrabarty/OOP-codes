#include <iostream>
#include <string>
using namespace std;

class Game {
public:
    string player;
    int runs;
    int innings;
    int notout;
    float avg;

    void input() {
        cout << "\nEnter player name: ";
        getline(cin, player);

        cout << "Enter runs: ";
        cin >> runs;

        cout << "Enter innings played: ";
        cin >> innings;

        cout << "Enter times not out: ";
        cin >> notout;

        cin.ignore();
    }

    void calculate() {
        avg = (float)runs / (innings - notout);
    }
};

int main() {
    Game p1, p2, p3;

    cout << "Enter details for three players:\n";

    // Input data
    p1.input();
    p1.calculate();

    p2.input();
    p2.calculate();

    p3.input();
    p3.calculate();


    cout << "\n-------------------------------------------------------------\n";
    cout << "Player Name\t\tRuns\tInnings\tNotOut\tAverage\n";
    cout << "-------------------------------------------------------------\n";

    cout << p1.player << "\t\t" << p1.runs << "\t"
         << p1.innings << "\t" << p1.notout << "\t"
         << p1.avg << endl;

    cout << p2.player << "\t\t" << p2.runs << "\t"
         << p2.innings << "\t" << p2.notout << "\t"
         << p2.avg << endl;

    cout << p3.player << "\t\t" << p3.runs << "\t"
         << p3.innings << "\t" << p3.notout << "\t"
         << p3.avg << endl;

    cout << "-------------------------------------------------------------\n";

    return 0;
}
