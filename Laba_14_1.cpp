using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int N, K, L;
	double sr, k;
	sr = 0;
	k = 0;
	cout << "Введите размер массива: ";
	cin >> N;
	int* A = new int[N];
	cout << "Введите элементы массива: " << endl;
	for (int j = 0; j < N; j++) {
		cin >> A[j];
	};
	cout << "Введите интервал, в котором надо найти среднее арифметическое: ";
	cin >> K >> L;
	for (int i = 1; i <= N; i++) {
		if ((i >= K) & (i <= L)) {
			sr = sr + int(A[i]);
			k++;
		};
	};
	sr = sr / k;
	cout << "Среднее арифметическое равно: " << sr;
	delete[] A;
	return 0;
}