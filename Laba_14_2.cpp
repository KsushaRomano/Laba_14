using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int N, i;
	double d;
	i = 1;
	cout << "Введите размер массива: ";
	cin >> N;
	int* A = new int[N];
	cout << "Введите элементы массива: " << endl;
	for (int j = 0; j < N; j++) {
		cin >> A[j];
	};
	d = A[2] - A[1];
	while (A[i] - A[i - 1] == d) {
		i++;
	};
	if (i == (N)) {
		cout << "Разность арифметической прогрессии равна: " << d;
	}
	else { 
		cout << "";
		cout << 0; };
	delete[] A;
	return 0;
}