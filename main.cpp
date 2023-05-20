#include <iostream>
#include <windows.h>
using std::endl;
using std::cout;
using std::cin;
using std::string;
using namespace std;



int main() {
	SetConsoleOutputCP(1251);
	int sum = 0;
	int n;
	do {
		cout << "¬вед≥ть число: ";
		cin >> n;
		sum += n;
	} while (n != 0);
	cout << "sum: " << sum;
	return  0;
}
