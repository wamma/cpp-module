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

LogLevel Harl::getLevel (const std::string &str) {
	if (str == "DEBUG")
		return DEBUG;
	else if (str == "INFO")
		return INFO;
	else if (str == "WARNING")
		return WARNING;
	else if (str == "ERROR")
		return ERROR;
	else
		return INVALID;
}

void Harl::complain (const std::string &level) {
	LogLevel logLevel = getLevel(level);
	switch(logLevel) {
		case DEBUG:
			debug();
		case INFO:
			info();
		case WARNING:
			warning();
		case ERROR:
			error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}