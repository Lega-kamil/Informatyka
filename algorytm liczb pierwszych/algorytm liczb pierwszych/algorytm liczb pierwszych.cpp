#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    int lp = 0;
    int p = 2;
    
    cout << "podaj ilosc liczb pierwszych: ";
    cin >> n;

    while (lp < n) {
        for (int d = 2; d <= p-1; d++) {
            if ( p % d == 0) {
                p = p + 1;
            }   
        }
        cout << p + " jest pierwsze!";
        lp = lp + 1;
        p = p + 1;
    }
}
