#include <iostream>
#include <string>
#include <cctype>
#include <vector>

//IT HASN't PASSED A TIME LIMIT IN SINGLE HELLA TEST BTW


int main() {
//	int lens;
	std::string str_lens;
	//std::vector <std::string> str_listed_nums;

	//std::string trashh;
	std::string str_listed_nums;
	//	std::cin >> lens;
	std::getline(std::cin, str_lens);
	//	std::cout << "\n";
	//	std::cin >> trashh;
		//std::cin >> str_listed_nums;
	//	std::getline(std::cin, str_listed_nums,  ' ');
	std::getline(std::cin, str_listed_nums);


//	lens = std::stoi(str_lens);
 //   lens+=1;


	/*
	std::cout << str_lens << "\n";
	std::cout << lens * 2 << "\n";
	std::cout << str_listed_nums << "\n";
	*/


	//std::string temp_dig;
	

	std::vector <std::string> str_list_of_nums;
	std::string temp_dig = "";
	for (size_t i = 0; i != str_listed_nums.size(); i++) {
		char spc = ' ';
//		std::string temp_dig = "";

		if (str_listed_nums[i] != spc) {
			temp_dig += str_listed_nums[i];
		}
		if (str_listed_nums[i] == spc || i + 1 == str_listed_nums.size()) {
			str_list_of_nums.push_back(temp_dig);
			temp_dig = "";
		}
	}
	
//	for (int l = 0; l != str_list_of_nums.size(); l++) {
//		std::cout << str_list_of_nums[l] << " ";
//	}
	
//	int l = 0;
    size_t l = 0;
	size_t temp_int;
	std::vector <size_t> ans_v;
 //   size_t tsize = str_list_of_nums.
	while (l < str_list_of_nums.size()) {

		for (size_t r = 0; r < str_list_of_nums.size(); r++) {
			temp_int = std::stoi(str_list_of_nums[r]);
//			std::cout << r << "\t" << l << "\n";
			if (temp_int == (l + 1)) {
				ans_v.push_back(r + 1);
			}

			}
		l++;
		}
	for (size_t k = 0; k < ans_v.size(); k++) {
		std::cout << ans_v[k] << " ";
	}

		
	}


