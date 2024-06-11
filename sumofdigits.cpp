#include <iostream>
#include <string>
//show sum of digits in num. it cannot pass the second test in ya handbook tho))

int main() {
	int givven_num;
	std::cin >> givven_num;
	std::string str_num = std::to_string(givven_num);
	int temp_g_num = givven_num;
	int len_of_num = 0;
	int ans = 0;
	do {
		temp_g_num /= 10;
		++len_of_num;
//		std::cout << temp_g_num << "\n";
	} while (temp_g_num >= 10);
//	++len_of_num;

//	std::cout << len_of_num;

	for (int i = 0; i <= len_of_num; ++i) {
		char char_f_num = str_num[i];
		int single_int = char_f_num - 48;
		ans += single_int;
//		ans += std::stoi(str_num[i]);
//		ans += std::strtol(char_f_num);
//		std::cout << str_num[i] << "\n";
//		std::cout << single_int << "\t" << ans << "\n";
	}

	std::cout << ans;


}
