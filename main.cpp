#include "Book.h"

int main() {
	setlocale(LC_ALL, "RUSSIAN");

	book b("����� 2033","������� ����������");

	cout << b._author() << " | " << b._name() << endl;


	system("pause");
}