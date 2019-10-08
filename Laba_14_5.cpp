using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int N, i;
	cout << "Введите размер массива: ";
	cin >> N;
	int* A = new int[N];
	cout << "Введите элементы массива: " << endl;
	for (int j = 0; j < N; j++) {
		cin >> A[j];
	};
	for (i = 0; i < (N - 1); i++) {
		for (int k = (i + 1); k < N; k++) {
			if (A[i] == A[k]) {
				cout << "Индексы пары чисел в порядке возрастания: " << i << " " << k << endl;
			};
		};
	};
}