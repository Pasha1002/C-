
#include <iostream>
#include <windows.h>
using std::endl;
using std::cout;
using std::cin;
using std::string;
using namespace std;



int main(){
	SetConsoleOutputCP(1251);
	int numb;
	cout << "¬вед≥ть чило: ";
	cin >> numb;
	for (int i = 0; i <= numb; i++) 
	{
		cout << i << " " << endl ;
	}

	return 0;
}