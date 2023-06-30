#include <iostream>

using namespace std;

int main() {

    cout << endl;
    cout << "Dieses Programm speichert 10 Ganzzahlen die vom Nutzer eingegeben werden und gibt diese in umgekehrter Reihnfolge wieder aus.";
    cout << endl;
    
    int meinArray[10];

    cout << "Bitte geben Sie die erste Zahl ein: " << endl;
    cin >> meinArray[0];
    cout << "Bitte geben Sie die zweite Zahl ein: " << endl;
    cin >> meinArray[1];
    cout << "Bitte geben Sie die dritte Zahl ein: " << endl;
    cin >> meinArray[2];
    cout << "Bitte geben Sie die vierte Zahl ein: " << endl;
    cin >> meinArray[3];
    cout << "Bitte geben Sie die fünfte Zahl ein: " << endl;
    cin >> meinArray[4];
    cout << "Bitte geben Sie die sechste Zahl ein: " << endl;
    cin >> meinArray[5];
    cout << "Bitte geben Sie die siebte Zahl ein: " << endl;
    cin >> meinArray[6];
    cout << "Bitte geben Sie die achte Zahl ein: " << endl;
    cin >> meinArray[7];
    cout << "Bitte geben Sie die neunte Zahl ein: " << endl;
    cin >> meinArray[8];
    cout << "Bitte geben Sie die zehnte Zahl ein: " << endl;
    cin >> meinArray[9];

    cout << endl;

    cout << "Hier sind die Zahlen in umgekehrter Reihenfolge: " << endl;

    for(int i = 9; i >= 0; i--) {
        cout << meinArray[i] << " ";
    }
    cout << endl;
}
