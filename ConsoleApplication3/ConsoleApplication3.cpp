#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	int length, k;

	srand(time(0));

	do {
		cout << "Введите длину массива: ";
		cin >> length;
	} while (length <= 1);

	int* array = new int[length];

	cout << "Исходный массив" << endl;

	for (int i = 0; i < length; i++) {
		array[i] = rand();
		cout << array[i] << " ";
	}

	int* temp = new int[length - 1];

	for (int i = 1; i < length; i++)
		temp[i - 1] = array[i];

	delete[] array;

	cout << endl;
	do {
		cout << "Введите сдвиг: ";
		cin >> k;
	} while (k <= 0);

	int* array2 = new int[length - 1 + k];

	cout << "Итоговый массив" << endl;

	for (int i = 0; i < k; i++)
	{
		array2[i] = NULL;
		cout << array2[i] << " ";
	}

	for (int i = k; i < length - 1 + k; i++)
	{
		array2[i] = temp[i - k];
		cout << array2[i] << " ";
	}

	return 0;
}