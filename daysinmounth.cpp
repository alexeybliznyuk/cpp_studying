#include <iostream>
#include <string>


int main() {
	int givven_year;
	std::string ans;
	int sequence_of_mounth;
	int m_ans = 0;
	std::cin >> sequence_of_mounth >> givven_year;


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
	//change second if-tree to switch
	switch (sequence_of_mounth) {

		case 1:
			m_ans = 31;
			break;
		case 2:
			if (ans == "YES") {
				m_ans = 29;
			}
			else if (ans == "NO") {
				m_ans = 28;
				}
			break;
		case 3:
			m_ans = 31;
			break;
		case 4:
			m_ans = 30;
			break;
		case 5:
			m_ans = 31;
			break;
		case 6:
			m_ans = 30;
			break;
		case 7:
			m_ans = 31;
			break;
		case 8:
			m_ans = 31;
			break;
		case 9:
			m_ans = 30;
			break;
		case 10:
			m_ans = 31;
			break;
		case 11:
			m_ans = 30;
			break;
		case 12:
			m_ans = 31;
			break;


	}
	std::cout << m_ans;
}
