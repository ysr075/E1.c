#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void delay(int seconds) {
	int milli_seconds = 1000 * seconds;
	clock_t start_time = clock();
	while (clock() < start_time + milli_seconds);
}

int main() {
	string LED_on = "\nLED on\n"; string LED_off = "\nLED off\n"; int input;
	do {
		cout << "\n1.on / 0.off: "; cin >> input;
		if (input == 1) {
			do {
				cout << LED_on; cin >> input;
				if (input == 0) {
					main();
				}
			} while (input == 1);
		} else if (input == 0) {
			do {
				cout << LED_off; cin >> input;
				if (input == 1) {
					main();
				}
			} while (input == 0);
		} else {
			delay(1);
			exit(0);
		}
	} while (true);
	return 0;
}
