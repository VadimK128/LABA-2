#include <iostream>
#include <cmath>
using namespace std;

void ladiya(pair<int, int> positionA, pair<int, int> positionB);
void slon(pair<int, int> positionA, pair<int, int> positionB);
void korol(pair<int, int> positionA, pair<int, int> positionB);
void ferz(pair<int, int> positionA, pair<int, int> positionB);
void peshka(pair<int, int> positionA, pair<int, int> positionB);

int main() {
	int a, b, c, d;
	cin >> a >> b;
	pair<int, int> positionA(a, b);
	cin >> c >> d;
	pair<int, int> positionB(c, d);
	ladiya(positionA,  positionB);
	slon(positionA, positionB);
	korol(positionA, positionB);
	ferz(positionA, positionB);
	peshka(positionA, positionB);
	return 0;
}
void ladiya(pair<int, int> positionA, pair<int, int> positionB) {
	if (positionA.first == positionB.first || positionA.second == positionB.second)
		cout << "ladiya Ugrozhaet" << endl;
	else
		cout << "ladiya Ne ugrozhaet" << endl;
}
void slon(pair<int, int> positionA, pair<int, int> positionB) {
	if ((positionA.first - positionB.first) == (positionA.second - positionB.second))
		cout << "slon Ugrozhaet" << endl;
	else
		cout << "slon Ne ugrozhaet" << endl;
}
void korol(pair<int, int> positionA, pair<int, int> positionB) {
	if (abs(positionA.first - positionB.first) <= 1 && abs(positionA.second - positionB.second) <= 1)
		cout << "korol mozhet" << endl;
	else
		cout << "korol ne mozhet" << endl;
}
void ferz(pair<int, int> positionA, pair<int, int> positionB) {
	if ((positionA.first - positionB.first) == (positionA.second - positionB.second) || (positionA.first == positionB.first || positionA.second == positionB.second))
		cout << "ferz Ugrozhaet" << endl;
	else
		cout << "ferz Ne ugrozhaet" << endl;
}
void peshka(pair<int, int> positionA, pair<int, int> positionB) {
	if (((positionA.first == positionB.first)  && (positionB.second - positionA.second == 1)) || ((abs(positionA.first - positionB.first) == 1) && (positionB.second - positionA.second == 1)))
		cout << "peshka mozhet" << endl;
	else
		cout << "peshka ne mozhet" << endl;
}