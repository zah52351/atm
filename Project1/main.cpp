#include <iostream>
#include "bank_headers.h"

int main()
{
	int number;
	int balance = 100000;
	do
	{
		show_menu();
		std::cin >> number;
		system("cls");
		switch (number) 
		{
			case 1:
				show_balance(balance);
				break;
			case 2:
				int sum;
				std::cout << "Введите сумму взноса" << "\n";
				std::cin >> sum;
				balance += sum;
				break;
			case 3:
				int minus;
				std::cout << "Введите сумму для снятия" << "\n";
				std::cin >> minus;
				if (minus > balance) {
					std::cout << "Недостаточно средств" << "\n";
				}
				else balance -= minus;
				break;
		}
		
	} while (number != 4);
	
	
	return 0;
}