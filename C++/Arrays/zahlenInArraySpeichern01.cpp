#include <iostream>

using namespace std;

int main() {

    cout << endl;
    cout << "Dieses Programm speichert 10 Ganzzahlen in einem Array und gibt diese danach wieder aus.";
    cout << endl;
    
    // Array erstellen
    int meinArray[10];          

    // Array befüllen mit Zahlen von 1 bis 10
    // Diese for - Schleife ist wie eine Maschine die 10 Mal durchläuft
    for(int i = 0; i < 10; i++) {                            // i (index) dient als Zähler, der Anzeigt, welcher Durchlauf gerade stattfindet.
        cout << meinArray[i] << i + 1;                       // Anweisung, die in jedem Durchlauf ausgeführt wird.
    }
    cout << endl;
}


