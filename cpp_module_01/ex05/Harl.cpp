#include "Harl.hpp"

void Harl::debug (void) {
	std::cout << "Debug: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info (void) {
	std::cout << "Info: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"<< std::endl;
}

void Harl::warning (void) {
	std::cout << "Warning: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error (void) {
	std::cout << "Error: This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain (std::string level) {
	typedef void (Harl::*func)(void);
	std::map<std::string, func> funcMap;

	funcMap["debug"] = &Harl::debug;
	funcMap["info"] = &Harl::info;
	funcMap["warning"] = &Harl::warning;
	funcMap["error"] = &Harl::error;

	std::map<std::string, func>::iterator it = funcMap.find(level);
	if (it != funcMap.end())
		(this->*(it->second))();
	else
		std::cout << "Invalid level." << std::endl;
}