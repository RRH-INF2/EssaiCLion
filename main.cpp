#include <cstdlib>
#include <iostream>
#include "func.h"
using namespace std;

int main() {
	cout << "Modif 1" << endl;
	cout << "Modif 2" << endl;
	cout << "Modif 3a" << endl;
	cout << "Modif 4b" << endl;
	cout << "Modif 5" << endl;
	int n = 12;
	cout << n << boolalpha << (estPair(n) ? " est pair" : " est impair") << endl;
	return EXIT_SUCCESS;
}
