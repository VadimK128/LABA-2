#include <iostream>
using namespace std;

int main() {
	int X, Y, Z;
	cin >> X >> Y >> Z;

	if (X % 2 != 0 && Y % 2 != 0) 	cout << "condition is true";
	else cout << "condition is false"; //1

	if (X < 20 ^ Y < 20) 	cout << "condition is true";
	else cout << "condition is false"; //2

	if (X == 0 || Y == 0) 	cout << "condition is true";
	else cout << "condition is false"; //3

	if (X < 0 && Y < 0 && Z < 0) 	cout << "condition is true";
	else cout << "condition is false"; //4

	if ((X % 5 == 0 ^ Y % 5 == 0) ^ Z % 5 == 0) 	cout << "condition is true";
	else cout << "condition is false"; //5

	if (X > 100 || Y > 100 || Z > 100) 	cout << "condition is true";
	else cout << "condition is false"; //6
	return 0;
	}