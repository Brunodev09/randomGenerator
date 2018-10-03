#include <iostream>

using namespace std;

void random(int, int);

int main() {

	random(10,3);
	return 0;
}

void random(int range, int total) {
	if (range < total) return;

	srand(time(NULL));
	int *draw = new int[total]; 

	for (int i = 0; i < total; i++) {
		draw[i] = rand() % range + 1;
		cout << draw[i] << endl;
		for (int j = 0; j < i + 1; j++) {
			if (draw[i] == draw[j] && i != j) {
				i--;
				break;
			}
		}
	}

	delete []draw;
}
