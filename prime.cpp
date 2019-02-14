#include <iostream>
using namespace std;
int main () {
	long counter1 = 2, counter2 = 1, prime;
	while (counter1 < 1000000) {
		counter2 = 1;
		prime = 1;
		while (counter2 < counter1) {
			if (counter1 % counter2 == 0 && counter2 != 1) {
				counter2 = counter1;
				prime = 0;
			}
			else {
				counter2++;
			}
		}
		if (prime == 1) {
			cout << counter1 << endl;
		}
		counter1++;
	}
	return 0;
}
