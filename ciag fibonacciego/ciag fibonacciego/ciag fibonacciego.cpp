// ciag fibonacciego.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int main()
{
    int n, f;
    int f0 = 0;
    int f1 = 1;
    cout << "ile wyrazow ciagu wypisac?: ";
    cin >> n;
    for (int i = 0; i <= n; i++) {
        if (i > 1) {
            f = f0 + f1;
            f0 = f1;
            f1 = f;
        }
        else {
            f = i;
        }
        cout << f;
        cout << endl;
    }

}
