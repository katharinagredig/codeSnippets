#include <iostream>

using namespace std;

int main() {

    int ersteZahl, zweiteZahl, summe;
    
    cout << endl;
    cout << endl;
    cout << "Willkommen, dieses Programm addiert zwei Zahlen die vom Benutzer eingegeben werden können und gibt die Summe dannach aus.";
    cout << endl;
    cout << endl;
    cout << "Bitte geben Sie dier erste Zahl ein: ";
    cin >> ersteZahl;
    cout << endl;
    cout << "Bitte geben Sie die zweite Zahl ein: ";
    cin >> zweiteZahl;
    summe = ersteZahl + zweiteZahl;         // Berechnung (addieren) der eingegebenen Zahlen
    cout << summe;
    cout << endl;
    cout << endl;
    cout << endl;
    return 0;
}