#include <iostream>
#include <string>
#include <map>
#include <sstream>

using namespace std;

map<char, string> hruf_morse = {
    {'a', "._"}, {'b', "_..."}, {'c', "_._."}, {'d', "_.."}, {'e', "."}, {'f', ".._"}, {'g', "__."},
    {'h', "...."}, {'i', ".."}, {'j', ".___"}, {'k', "_._"}, {'l', "._.."}, {'m', "__"}, {'n', "_."},
    {'o', "___"}, {'p', ".__."}, {'q', "__._"}, {'r', "._."}, {'s', "..."}, {'t', "_"}, {'u', "..._"},
    {'w', ".__"}, {'x', "_.._"}, {'y', "_.__"}, {'z', "__.."}, {'1', ".._"}, {'v', ".____"},
    {'2', "..___"}, {'3', "...__"}, {'4', "...._"}, {'5', "....."}, {'6', "_...."}, {'7', "__..."},
    {'8', "___.."}, {'9', "____."}, {'0', "_____"}
};

string morse_translate(string text) {
    string morse_code = "";
    for (char c : text) {
        if (hruf_morse.find(c) != hruf_morse.end()) {
            morse_code += hruf_morse[c] + " ";
        } else {
            morse_code += " ";
        }
    }
    return morse_code;
}

string reverse_morse_translate(string morse_code) {
    string text = "";
    stringstream ss(morse_code);
    string token;
    while (ss >> token) {
        for (auto entry : hruf_morse) {
            if (entry.second == token) {
                text += entry.first;
                break;
            }
        }
    }
    return text;
}

int main() {
    string input;

    while (true) {
        cout << "Masukkan teks atau kode Morse: ";
        getline(cin, input);

        if (input == "")
            break;

        if (isalpha(input[0])) {
            string morse_result = morse_translate(input);
            cout << "Kode Morse: " << morse_result << endl;
        } else {
            string text_result = reverse_morse_translate(input);
            cout << "Teks: " << text_result << endl;
        }
    }

    return 0;
}
