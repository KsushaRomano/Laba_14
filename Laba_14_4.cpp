using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int N, i, lm;
	i = 1;
	lm = 0;
	cout << "Введите размер массива: ";
	cin >> N;
	int* A = new int[N];
	cout << "Введите элементы массива: " << endl;
	for (int j = 0; j < N; j++) {
		cin >> A[j];
	};
	for (i = 1; i < N; i++) {
		if ((A[i - 1] < A[i]) & (A[i + 1] < A[i])) {
			lm = i;
		};
	};
	cout << "Номер последнего локального максимума: " << lm;
}