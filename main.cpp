#include "Book.h"

int main() {
	setlocale(LC_ALL, "RUSSIAN");

	book b("Метро 2033","Дмитрий Глуховский");

	cout << b._author() << " | " << b._name() << endl;


	system("pause");
}