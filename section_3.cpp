#include <iostream>

using namespace std;

int main() {

	/* T�P D�N���M� BA�LANGI� */
	 int num = 9;
	float a;

	a = (float)num / 4;

	cout << "a: " << a << endl; 
	/* T�P D�N���M� SON */

	/* �� SAYININ TOPLAMININ KARES� BA�LANGI� */
	float a, b, c, d;

	cout << "First number: \n" << endl;
	cin >> a;
	cout << "Second number: \n" << endl;
	cin >> b;
	cout << "Third number: \n" << endl;
	cin >> c;
	d = a + b + c;
	cout << "Square: " << d * d << endl;
	/* �� SAYININ TOPLAMININ KARES� SON */

/* KALANLARIN K�P� BA�LANGI� */
	int a, b, c;

	cout << "First number: \n" << endl;
	cin >> a;
	cout << "Second number: \n" << endl;
	cin >> b;

	a %= 5;
	b %= 3;
	c = a + b;

	cout << "Cube of mods: " << c * c * c << endl;
	/* KALANLARIN K�P� SON */


/* B�R EKS�K B�R FAZLA MOD BA�LANGI� */
	int n1, n2, n3, n4, r1, r2, r3;
	cout << "First number: " << endl;
	cin >> n1;
	cout << "\n" << endl;
	cout << "Second number: " << endl;
	cin >> n2;
	cout << "\n" << endl;
	cout << "Third number: " << endl;
	cin >> n3;
	cout << "\n" << endl;
	cout << "Fourth number: " << endl;
	cin >> n4;
	cout << "\n" << endl;

	r1 = --n1 + n2;
	r2 = ++n3 * n4;

	r3 = r1 + r2;

	cout << "Result: " << r3 % 2 << endl;
/* B�R EKS�K B�R FAZLA MOD SON */
}