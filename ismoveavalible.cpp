#include <iostream>
#include <string>
#include <cmath>
//programm that shows is a Quenn avalible to move from start pos to post pos
int main() {
	int start_x, start_y, post_x, post_y;

	std::cin >> start_x;
	std::cin >> start_y;
	std::cin >> post_x;
	std::cin >> post_y;


	if (start_x == post_x || start_y == post_y) {
		std::cout << "YES";
	}
	else if (std::abs(start_x - post_x) == std::abs(start_y - post_y)) {
		std::cout << "YES";

	}
	else {
		std::cout << "NO";
	}
}
