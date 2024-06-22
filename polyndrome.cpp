#include <iostream>
#include <string>
#include <cctype>
#include <vector>

//it passed YA checker

int main() {
	std::string prompt;
	std::getline(std::cin, prompt);
	//std::cout << prompt;


	std::string no_space_p = "";
	std::string rev_n_sp = "";
	
	
	//std::cout << no_space_p << "\t" << rev_n_sp << "\t" << (no_space_p == rev_n_sp) <<std::endl;

	for (size_t i = 0; i < prompt.size(); ++i) {
		if ( prompt[i] != ' ')
			no_space_p += prompt[i];
	}

	//for (size_t j = 0; j != no_space_p.size() + 1; j++) {
	if (no_space_p != "") {
		for (size_t j = no_space_p.size() - 1; j != 0; j = j - 1) {
			rev_n_sp += no_space_p[j];
		}
		rev_n_sp += no_space_p[0];
	}
	/*
	for (size_t j = no_space_p.size() - 1;j != 0; j = j - 1) {
		rev_n_sp += no_space_p[j];
	}
	if (no_space_p != "") {
		rev_n_sp += no_space_p[0];
	}

	*/
	//std::cout << no_space_p << " " << rev_n_sp << " " << (no_space_p == rev_n_sp);
	
	if (no_space_p == rev_n_sp) {
		std::cout << "YES";
	}
	else {
		std::cout << "NO";

	}
	
	
		
	}


