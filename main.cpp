#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int x;
	cout << "Введіть число: ";
	cin >> x;
	int y;
	cout << "Введіть степінь числа: ";
	cin >> y;
	int sum;
	sum = pow(x, y);
	cout << "Число: " << x << " в степені: " << y << ": " << sum << endl;
	return 0;
}