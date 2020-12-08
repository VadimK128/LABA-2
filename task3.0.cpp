#include <iostream>
using namespace std;

void naSem();
void naX();
int X;

int main()
{
	cin >> X;
	naSem();
	cout << endl;
	naX();
	return 0;
}
void naSem() {
	for (int i = 1; i <= 9; i++)
		cout << i << " x 7 = " << i * 7 << endl;
}
void naX() {
	for (int i = 1; i <= 9; i++)
		cout << i << " x " << X << " = " << i * X << endl;
}
