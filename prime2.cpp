#include <iostream>
using namespace std;
int main () {
	long counter1 = 2, counter2 = 1, prime, upbound = 100;
	while (prime == 0) {
		while (counter2 < counter1) {
			if (counter1 % counter2 == 0 && counter2 != 1) {
				counter2 = counter1;
			}
			else {
				counter2++;
			}
		}
		if (prime != 1) {
			upbound--;
		}
	}
	return 0;
}
