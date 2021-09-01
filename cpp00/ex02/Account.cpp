#include "Account.hpp"
#include <iostream>

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
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account(void) {

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
    
    std::cout << "accounts:" << Account::_nbAccounts << ";total:"
        << Account::_totalAmount << ";deposits:" << Account::_totalNbDeposits
        << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void    Account::makeDeposit(int deposit) {

    Account::_totalAmount += deposit;
    Account::_totalNbDeposits++;
    this->_amount += deposit;
    this->_nbDeposits++;
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
        std::cout << "index:" << this->_accountIndex << ";p_amount:"
            << this->_amount + withdrawal << ";withdrawal:" << withdrawal
            << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals
            << std::endl;
        return (1);
    }
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:refused" << std::endl;
    return (0);
}

int     Account::checkAmount(void) const {
    return 1;
}

void    Account::displayStatus(void) const {
    std::cout << "index:" << this->_accountIndex << ";amount:"
        << this->_amount << ";deposits:" << this->_nbDeposits
        << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}