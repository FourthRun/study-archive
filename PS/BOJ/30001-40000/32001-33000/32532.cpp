#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string s, Ime, Prezime, Datum, OIB;
    int year;

    cin >> s;

    OIB = s.substr(s.size() - 15, 11);

    cin >> s;

    year = stoi(s.substr(0, 2));

    if(year >= 25) Datum = s.substr(4, 2) + "-" + s.substr(2, 2) + "-19" + s.substr(0, 2);
    else Datum = s.substr(4, 2) + "-" + s.substr(2, 2) + "-20" + s.substr(0, 2);

    cin >> s;

    for(int i = 1; i < s.size() - 1; i++) {
        if(s[i] == '<' && s[i + 1] == '<') {
            Ime = s.substr(0, i);

            for(int j = i + 2; j < s.size() - 1; j++) {
                if(s[j] == '<' && s[j + 1] == '<') {
                    Prezime = s.substr(i + 2, j - i - 2);

                    break;
                }
            }

            break;
        }
    }

    for(int i = 1; i < Ime.size(); i++) {
        Ime[i] = tolower(Ime[i]);
    }

    for(int i = 1; i < Prezime.size(); i++) {
        Prezime[i] = tolower(Prezime[i]);
    }

    cout << "Ime: " << Ime << "\n";
    cout << "Prezime: " << Prezime << "\n";
    cout << "Datum rodjenja: " << Datum << "\n";
    cout << "OIB: " << OIB;

    return 0;
}