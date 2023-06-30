#include <iostream>

using namespace std;

int main() {

    cout << "int Groesse:       "  << sizeof(int) * 8 << " Bit\n";
    
    cout << "short:             "  << sizeof(short) * 8 << " Bit\n";
    cout << "int:               "  << sizeof(int) * 8 << " Bit\n";
    cout << "long:              "  << sizeof(long) * 8 << " Bit\n";
    cout << "long long:         "  << sizeof(long long) * 8 << " Bit\n";
    
    return 0;
}