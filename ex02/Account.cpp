#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>
#include <sstream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp(void)
{
    std::stringstream timestamp;
    std::time_t current_time = std::time(nullptr);
    std::tm *local_time = std::localtime(&current_time);

    timestamp << "[" << std::setw(4) << std::setfill('0') << (local_time ->tm_year + 1900)
        << std::setw(2) << std::setfill('0') << (local_time -> tm_mon + 1)
            <<  std::setw(2) << std::setfill('0') << (local_time -> tm_mday)
                << "_" << std::setw(2) << std::setfill('0') << (local_time -> tm_hour)
                    << std::setw(2) << std::setfill('0') << (local_time -> tm_min)
                        << std::setw(2) << std::setfill('0') << (local_time -> tm_sec)
                            << "] ";
    std::cout << timestamp.str();
}
void	Account::makeDeposit(int deposit)
{
    int p_amount;

    p_amount = _amount;
    _amount += deposit;
    _nbDeposits += 1;
    _totalNbDeposits += _nbDeposits;
    _totalAmount += deposit;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount << ";deposit:"
        << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits<< std::endl;
}
bool	Account::makeWithdrawal(int withdrawal)
{
    int p_amount;

    p_amount = _amount;
    _displayTimestamp();
    if (withdrawal > _amount)
        std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount
            << ";withdrawal:refused" << std::endl;
    else
    {
        _nbWithdrawals += 1;
        _amount -= withdrawal;
        _totalNbWithdrawals += _nbWithdrawals;
        _totalAmount -= withdrawal;
        std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount
            << ";withdrawls:" << withdrawal << ";amount:" << _amount <<
                ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    }
    return 0;
}
void	Account::displayStatus(void) const
{
_displayTimestamp();
   std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:"
    << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}
Account::Account(int initial_deposit)
{
    static int i;

    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _accountIndex = i++;
    _amount = initial_deposit;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created"
        << std::endl;
    _nbAccounts = i;
    _totalAmount += _amount;
}
Account::~Account(void)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed"
        << std::endl;
}
void	Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount <<
        ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}