#include <iostream>
#include <time.h>
using namespace std;

int main() {
	system("chcp 1251");
	srand(time(NULL));
	int a[15];
	int b[15];
	int ASD = 0;
	int SUM = 0;
	cout << "a[ ";
	for (int i = 0; i < 15; i++) {
		*(a + i) = 1 + rand() % 30 - 10;
	}
	for (int i = 0; i < 15; i++) {
		cout << *(a + i) << " ";
	}
	cout << "]\n";
	cout << "b[ ";
	for (int i = 2; i < 15; i += 3) {
		*(b + ASD) = *(a + i);
		ASD++;
	}
	for (int i = 0; i < 5; i++) {
		cout << *(b + i) << " ";
		SUM++;
	}
	cout << "]\n";
	cout << "Size array b: " << SUM;
	return 0;


}
	/*srand(time(NULL));
		int result = 1 + rand() % 20;*/
