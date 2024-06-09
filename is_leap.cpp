#include <iostream>
#include <string>
//it says is givven year leap or nah

int main() {
	int givven_year;
	std::string ans;


	std::cin >> givven_year;


	if (givven_year % 400 == 0) {
		ans = "YES";
	}
	else if (givven_year % 100 == 0) {
		ans = "NO";
	}
	else if (givven_year % 4 == 0) {
		ans = "YES";

	}
	else {
		ans = "NO";
	}


	std::cout << ans;
}
