#include <iostream>
#include <string>
#include <cctype>

//it checks if password is valid


int main() {
	std::string password;
	std::string valid;
	bool issizeok;
	bool hasupper = false, haslower = false, hasdigs = false , hasetc = false;
	bool asccheck = true;

	std::cin >> password;

	if (password.size() >= 8 && password.size() <= 14) {
		issizeok = true;
	}
	else {
		issizeok = false;
	}

//	std::cout << issizeok << "\n";

	for (size_t i = 0; i != password.size(); ++i) {
//		std::cout << password[i] << "\n";
		int assc = password[i];
		if (std::isupper(password[i])) {
			hasupper = true;
		}
		if (std::islower(password[i])) {
			haslower = true;
		}
		if (std::isdigit(password[i])) {
			hasdigs = true;
		}
		if (std::ispunct(password[i])) {
			hasetc = true;
		}
		if (assc < 33 || assc > 126) {
			asccheck = false;
		}


	}
//	std::cout << hasupper << "\t" << haslower << "\t" << hasdigs << "\t" << hasetc << "\t" << asccheck <<  "\n";
	if (hasupper + haslower + hasdigs + hasetc >= 3 && asccheck && issizeok) {
		valid = "YES";
	}
	else {
		valid = "NO";
	}
	std::cout << valid;
//	std::cout << password.size();
}
