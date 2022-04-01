#include <iostream>
using namespace std;

int main()
{
    int a, b;
    int iloczyn = 0;
    int nww = 0;
    cout << "podaj a: ";
    cin >> a;
    cout << "podaj b: ";
    cin >> b;

    iloczyn = a * b;
    while (a != b) {
        if (a < b) {
            b = b - a;
        }
        else {
            a = a - b;
        }
        nww = iloczyn / a;
    }
    cout << "najmniejsza wspolna wielokrotnosc: ";
    cout << nww;
    cout << endl;
    cout << "najwiekszy wspolny dzielnik: ";
    cout << a;

}

