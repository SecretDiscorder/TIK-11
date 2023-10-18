#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;
int main() {
    string input;
    cout << "Masukkan angka-angka yang dipisahkan oleh spasi: ";
    getline(cin, input);

    istringstream iss(input);
    vector<string> num;

    // Mengambil angka-angka dan memasukkannya ke dalam vektor
    string number;
    while (iss >> number) {
        num.push_back(number);
    }

    // Memproses pembalikan vektor
    reverse(num.begin(), num.end());

    cout << "Angka yang terbalik: ";
    for (const string& numb : num) {
        cout << numb << " ";
    }

    return 0;
}
