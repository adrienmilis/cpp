#include "Account.hpp"
#include <iostream>
#include <chrono>
#include <iomanip>

// https://42born2code.slack.com/archives/C01JMT468E4/p1625488319143300?thread_ts=1625246379.140900&cid=C01JMT468E4

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {

    Account::_totalAmount += initial_deposit;
    this->_amount = initial_deposit;
    this->_accountIndex = _nbAccounts;
    Account::_nbAccounts++;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account(void) {

    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

int  Account::getNbAccounts(void) {

    return (Account::_nbAccounts);
}

int Account::getTotalAmount(void) {

    return (Account::_totalAmount);
}

int Account::getNbDeposits(void) {

    return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void) {

    return (Account::_totalNbWithdrawals);
}

void    Account::displayAccountsInfos(void) {
    
    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::_nbAccounts << ";total:"
        << Account::_totalAmount << ";deposits:" << Account::_totalNbDeposits
        << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void    Account::makeDeposit(int deposit) {

    Account::_totalAmount += deposit;
    Account::_totalNbDeposits++;
    this->_amount += deposit;
    this->_nbDeposits++;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:"
        << this->_amount - deposit << ";deposit:" << deposit << ";amount:"
        << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool    Account::makeWithdrawal(int withdrawal) {
    if (this->_amount >= withdrawal)
    {
        Account::_totalAmount -= withdrawal;
        Account::_totalNbWithdrawals++;
        this->_amount -= withdrawal;
        this->_nbWithdrawals++;
        Account::_displayTimestamp();
        std::cout << "index:" << this->_accountIndex << ";p_amount:"
            << this->_amount + withdrawal << ";withdrawal:" << withdrawal
            << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals
            << std::endl;
        return (1);
    }
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:refused" << std::endl;
    return (0);
}

int     Account::checkAmount(void) const {
    return 1;
}

void    Account::displayStatus(void) const {

    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:"
        << this->_amount << ";deposits:" << this->_nbDeposits
        << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void    Account::_displayTimestamp() {

    std::chrono::time_point<std::chrono::system_clock> now = std::chrono::system_clock::now();
	std::time_t time_now = std::chrono::system_clock::to_time_t(now);

	tm utc_tm = *localtime(&time_now);
	std::cout << std::setfill('0') << "[" << (utc_tm.tm_year + 1900)
			<< std::setw(2) << utc_tm.tm_mon
			<< std::setw(2) << utc_tm.tm_mday << "_"
			<< std::setw(2) << utc_tm.tm_hour
			<< std::setw(2) << utc_tm.tm_min
			<< std::setw(2) << utc_tm.tm_sec << "] ";
}