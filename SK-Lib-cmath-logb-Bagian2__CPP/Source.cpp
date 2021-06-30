
#include <cmath>
#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	double hasil;
	int x = -70; /*	Bilangan Negatif */

	hasil = logb(x);
	cout << "logb(" << x << ") = " << "log(|" << x << "|) = " << hasil << endl;

	x = 45; /*	Bilangan Positif */

	hasil = logb(x);
	cout << "logb(" << x << ") = " << "log(|" << x << "|) = " << hasil << endl;

	_getch();
	return 0;
}
