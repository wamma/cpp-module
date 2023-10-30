#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account (int initial_deposit) {
	this->_accountIndex = _nbAccounts;
	this->_amount = initial_deposit; //현재 잔액 정보
	this->_nbDeposits = 0; // 개별 계좌의 입금 횟수
	this->_nbWithdrawals = 0; // 개별 계좌의 출금 횟수
	this->_nbAccounts++;
	this->_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account (void) {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

int Account::getNbAccounts(void) {
	return _nbAccounts;
}

int Account::getTotalAmount(void) {
	return _totalAmount;
}

int Account::getNbDeposits(void) {
	return _totalNbDeposits;
}

int Account::getNbWithdrawals(void) {
	return _totalNbWithdrawals;
}

void Account::_displayTimestamp(void) {
	std::time_t now = std::time(0);
	std::tm* currentTime = std::localtime(&now);
	char formatTime[20];
	std::strftime(formatTime, sizeof (formatTime), "[%Y%m%d_%H%M%S] ", currentTime);
	std::cout << formatTime;
}

void Account::displayAccountsInfos(void) {
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void Account::makeDeposit(int deposit) {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";deposit:" << deposit << ";amount:" << this->_amount + deposit << ";nb_deposits:" << this->_nbDeposits + 1 << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {

}

int Account::checkAmount(void) const {

}

void Account::displayStatus(void) const {

}