#include <iostream>
#include <string>


int main() {
	char oper;
	int num1, num2;
	int ans;
	std::cout << "Choose ur operation (+ or -) : ";
	std::cin >> oper;
	std::cout << "Choose the first num : ";
	std::cin >> num1;
	std::cout << "Choose the second num : ";
	std::cin >> num2;
	if (oper == '+') {
		ans = num1 + num2;
	}
	else if (oper == '-') {
		ans = num1 - num2;
	}
	std::cout << "The answer is " << ans << "!";

}
