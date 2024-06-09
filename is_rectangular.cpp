#include <iostream>
#include <string>
#include <cmath>

//programm that shows is triangle gonna be rectangular or no. moreover, if such triangle is impossible to build, programm gonna write "UNDEFINED"

int main() {
	int a, b, c;
	std::string ans;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	if (a > b + c || b > a + c || c > a + b) {
		ans = "UNDEFINED";
	}
	else {
		if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b) {
			ans = "YES";
		}
		else {
			ans = "NO";
		}
	}
	std::cout << ans;
}	
