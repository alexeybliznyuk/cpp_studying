#include <iostream>
#include <string>

//some stuff from ya handbook
int main() {
	int givven_num;
	double temp_num;
	double ans = 0;
	std::cin >> givven_num;
	for (int i = 1; i <= givven_num; ++i) {
//		std::cout << i << "\n";
		if (i % 2 == 0) {
			temp_num = -1.0;
		}
		else if (i % 2 == 1) {
			temp_num = 1.0;

		}
		temp_num /= i;
		ans += temp_num;

	}
	std::cout << ans;
}
