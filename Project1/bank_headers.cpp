#include <iostream>
#include "bank_headers.h"

void show_balance(int& b) {
	std::cout << "Ваш баланс:" << b << "$" << "\n";
}
void show_menu() {
	std::cout << "**********Welcome to NovikomBank ATM, please choose an option**********" << "\n" <<
		"1. Показать Баланс" << "\n" <<
		"2. Внести средства" << "\n" <<
		"3. Получить средства" << "\n" <<
		"4. Заверишить работу" << "\n" <<
		"***********************************************************************" << "\n";
}