#include <iostream>
#include <windows.h>
using std::endl;
using std::cout;
using std::cin;
using std::string;
using namespace std;



int main() {
	SetConsoleOutputCP(1251);
	cout << "������ ����� �����: ";
	int n_1, n_2;
	cin >> n_1;
	cout << "������ ����� �����: ";
	cin >> n_2;
	int min_v = min(n_1, n_2);
	int max_v = max(n_1, n_2);
	int sum;
	cout << "��" << endl;
	for (int count = min_v; count <= max_v; ++count) {
		cout << count << " ";
	}
	cout << endl;
	cout << "����" << endl;
	sum = 0;
	for (int count = min_v; count <= max_v; count++) {
		sum += count;
	}
	cout << sum << "";
	return 0;
}
