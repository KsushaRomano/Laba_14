using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int N, i;
	double min;
	i = 1;
	cout << "Введите размер массива: ";
	cin >> N;
	int* A = new int[N];
	cout << "Введите элементы массива: " << endl;
	for (int j = 0; j < N; j++) {
		cin >> A[j];
	};
	min = A[1];
	for (i = 1; i <= N; i += 2) {
		if (A[i] <= min) {
			min = A[i];
		};
	};
	cout << "Минимальный элемент массива с четным номером равен: " << min;
}