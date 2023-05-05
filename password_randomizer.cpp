#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	srand(time(NULL)); // Initialize seed so random number every time
	char password[24];

	for (int i = 0; i < 24; i++) {
		password[i] = rand() % 94 + 33; // only contain printable ascii characters
	}

	cout << password << "\n";

	return 0;
}
