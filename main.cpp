
#include <iostream>
#include <windows.h>
using std::endl;
using std::cout;
using std::cin;
using std::string;
using namespace std;



int main() {
	SetConsoleOutputCP(1251);
	int n_1, n_2;
	cout << "Введіть мінімальне число: ";
	cin >> n_1;
	cout << "Введіть максимальне число: ";
	cin >> n_2;
	int max_v = max(n_1, n_2);
	int min_v = min(n_1, n_2);
	cout << "" << endl;
	cout << "Всі" << endl;
	for (int count = min_v; count <= max_v; ++count) {
		cout << count << " ";
	}
	cout << endl;
	cout << "Парні числа: " << endl;
	for (int count = min_v; count <= max_v; ++count) {
		if (count % 2 == 0) {
			cout << count << " ";
		}
	}
	cout << endl;
	cout << "Непарні числа: " << endl;
	for (int count = min_v; count <= max_v; ++count) {
		if (count % 2 == !0) {
			cout << count << " ";
		}
	}
	cout << endl;
	cout << "Числа кратні 7: " << endl;
	for (int count = min_v; count <= max_v; ++count) {
		if (count % 7 == !0) {
			cout << count << " ";
		}
	}
	return 0;
}