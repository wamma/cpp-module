#include "Harl.hpp"

void Harl::debug (void) {
	std::cout << "[ Debug ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info (void) {
	std::cout << "[ Info ]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"<< std::endl;
}

void Harl::warning (void) {
	std::cout << "[ Warning ]\nI think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error (void) {
	std::cout << "[ Error ]\nThis is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain (std::string level) {
	typedef void (Harl::*func)(void);
	func funcArray[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int levelIndex = -1;
	for (int i = 0; i < 4; ++i) {
		if (level == levels[i]) {
			levelIndex = i;
			break;
		}
	}

	if (levelIndex == -1) {
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return;
	}

	for (int i = levelIndex; i < 4; ++i) {
		(this->*funcArray[i])();
	}
}