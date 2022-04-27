
#include <iostream>
using namespace std;

void ciag(int n)
{
	int f0, f1, f;
	f0 = 0;
	f1 = 1;

	for (int i = 0; i < n; i++) {
		if (i > 1) 
		{
			f = f0 + f1;
			f0 = f1;
			f1 = f;
		}
		else 
		{
			f = i;
		}
		cout << f;
		cout << endl;
	}
}

int main()
{
	int n;
	cout << "podaj ilość liczb ciagu fibonacciego: ";
	cin >> n;
	ciag(n);

}

