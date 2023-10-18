#include <iostream>
#include <string>

using namespace std;

int main() {
    string inputString;

    cout << "Masukkan sebuah string: ";
    getline(cin, inputString);

    // Mencetak string terbalik
    cout << "String terbalik: ";
    for (int i = inputString.length() - 1; i >= 0; i--) {
        cout << inputString[i];
    }
    cout << endl;

    return 0;
}

