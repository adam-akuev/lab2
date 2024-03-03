#include <iostream>
#include <time.h>
#include <cmath>
using namespace std;

int main() {
	system("chcp 1251");
	srand(time(NULL));
	int n;
	float max = 0;
	float sum = 0;
	cout << "Enter the number of elements in the array: ";
	cin >> n;
	// 1
	float* array = new float[n];
	for (int i = 0; i < n; i++) {
		*(array + i) = 10.0 - 20.0 * rand() / (float)RAND_MAX;
	}
	cout << "A[";
	for (int i = 0; i < n; i++) {
		cout << *(array + i) << " ";
		if (max < *(array + i))
		max = *(array + i);
		if (*(array + i) < 0) {
			float x = fabs(*(array + i));
			if (max < x)
				max = x;
		}
	}
	cout << "]\n";
	cout << "Module max: " << max << "\n";
	// 2
	bool flag = false;
	for (int i = 0; i < n; i++) {
		if (*(array + i) > 0) {
			flag = true;
		}
		else if (flag) {
			sum += *(array + i);
		}
	}
	cout << "Sum after positive element: " << sum << endl;

	// 3
	int a, b;
	cout << "add a:";
	cin >> a;
	cout << "add b:";
	cin >> b;
	cout << "A[ ";
	for (int i = 0; i < n; i++) {
		if (*(array + i) >= a && *(array + i) <= b) {
			cout << *(array + i) << " ";
		}
	}
	for (int i = 0; i < n; i++)
		if (*(array + i) < a || *(array + i) > b)
			cout << *(array + i) << " ";
	cout << "]";
	delete[] array;
	return 0;
}