//Rich Davis
//10/2/2022
//Project 11

#include <iostream>
using namespace std;

int coinToss() {
	int x = rand() % 2 + 1;
	if (x == 1) {
		cout << "\nheads";
		return 0;
	}
	else {
		cout << "\ntails";
		return 0;
	}
}


int main() {
	srand(time(0));
	int x;
	cout << "How many times should the coin be tossed? ";
	cin >> x;

	for (x; x > 0; --x) {
		coinToss();
	}

	return 0;
}