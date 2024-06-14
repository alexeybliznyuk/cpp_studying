#include <iostream>
#include <string>
#include <cctype>




int main() {
	std::string givven_word;
	std::cin >> givven_word;
	std::string word_1_temp = "";
	word_1_temp += givven_word[0];
	std::string word_2_temp = "";
	std::string word_3_temp = "";
	std::string word_4_temp = "";
//	std::cout << word_1_temp;


	for (size_t i = 1; i != givven_word.size(); ++i) {
//		std::cout << givven_word[i] << "\n";
		if (!(givven_word[i] == 'a' || givven_word[i] == 'e' || givven_word[i] == 'h' || givven_word[i] == 'i' || givven_word[i] == 'o' || givven_word[i] == 'w' || givven_word[i] == 'u')) {
//			std::cout << "it is a bad letter : " << givven_word[i] << "\n";
			word_1_temp.push_back(givven_word[i]);

		}
	}
	for (size_t j = 1; j != word_1_temp.size(); ++j) {
		if (word_1_temp[j] == 'b' || word_1_temp[j] == 'f' || word_1_temp[j] == 'p' || word_1_temp[j] == 'v') {
			word_2_temp.push_back('1');

		}
		else if (word_1_temp[j] == 'c' || word_1_temp[j] == 'g' || word_1_temp[j] == 'j' || word_1_temp[j] == 'k' || word_1_temp[j] == 'q' || word_1_temp[j] == 's' || word_1_temp[j] == 'x' || word_1_temp[j] == 'z') {
			word_2_temp.push_back('2');

		}
		else if (word_1_temp[j] == 'd' || word_1_temp[j] == 't') {
			word_2_temp.push_back('3');
		}
		else if (word_1_temp[j] == 'l') {
			word_2_temp.push_back('4');
		}
		else if (word_1_temp[j] == 'm' || word_1_temp[j] == 'n') {
			word_2_temp.push_back('5');
		}
		else if (word_1_temp[j] == 'r') {
			word_2_temp.push_back('6');
		}
	}
	word_2_temp = givven_word[0] + word_2_temp;
	word_3_temp += givven_word[0];
	

	for (size_t l = 1; l != word_2_temp.size(); ++l) {
		if (!(word_2_temp[l] == word_2_temp[l - 1])) {
			word_3_temp.push_back(word_2_temp[l]);

		}
	}
	size_t f = 0;
	while (f < 4 && f < word_3_temp.size()) {
		word_4_temp.push_back(word_3_temp[f]);
		f++;
	}
	while (word_4_temp.size() < 4) {
		word_4_temp.push_back('0');
	}



	/*
	std::cout << word_1_temp << "\n";
	std::cout << word_2_temp << "\n";
	std::cout << word_3_temp << "\n";
	std::cout << word_4_temp << "\n";
	*/


	std::cout << word_4_temp << "\n";


}
