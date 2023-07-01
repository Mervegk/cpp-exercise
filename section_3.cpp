#include <iostream>

using namespace std;

int main() {
	float a, b, c;

	cout << "First number: \n" << endl;
	cin >> a;
	cout << "Second number: \n" << endl;
	cin >> b;

	a %= 5;
	b %= 3;
	d = a + b;
	cout << "Cube of mods: " << d * d * d << endl;
}