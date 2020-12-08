#include <iostream>
using namespace std;

void P1();
void P2();
void P3();
void P4();

int main()
{
    P1();
    P2();
    P3();
    P4();
    return 0;
}
void P1() {
    int proiz1 = 1;
    for (int i = 8; i <= 15; i++)
        proiz1 *= i;
    cout << proiz1 << endl;
}
void P2() {
    int proiz2 = 1, a;
    cin >> a;
    if (a < 20 && a > 1) {
        for (int i = a; i <= 20; i++) {
            proiz2 *= i;
        }
        cout << proiz2 << endl;
    }
    else cout << "Neverno vveli parametr a" << endl;
}
void P3() {
    int proiz3 = 1, b;
    cin >> b;
    if (b < 20 && b > 1) {
        for (int i = 1; i <= b; i++) {
            proiz3 *= i;
        }
        cout << proiz3 << endl;
    }
    else cout << "Neverno vveli parametr b" << endl;
}
void P4() {
    int proiz4 = 1, a, b;
    cin >> a >> b;
    if (b > a) {
        for (int i = a; i <= b; i++) {
            proiz4 *= i;
        }
        cout << proiz4 << endl;
    }
    else if (b == a)
        cout << a * b << endl;
    else
        cout << "Neverno vveli parametri" << endl;
}