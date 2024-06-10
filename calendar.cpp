#include <iostream>
#include <string>
//on ya handbook failed the tests lmao

int main() {
	int dotw;
	int dim;
	std::cin >> dotw;
	std::cin >> dim;
	for (int i = 1; i < dotw + dim; ++i) {
		if (i < dotw) {
			std::cout << "   ";
		}
		else {
			if ((i - 1) % 7 == 0) {
				std::cout << "\n";

			}
			if (i - dotw < 9) {
				std::cout << " " << (i - dotw + 1) << " ";

			}
			if (i - dotw >= 9) {
				std::cout << (i - dotw +1 ) << " ";
			}
		}
	}
	
}
