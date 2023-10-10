#include "Account.hpp"
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::makeDeposit(int deposit)
{
    int p_amount;

    p_amount = _amount;
    _amount += deposit;
    _nbDeposits += 1;
    _totalNbDeposits += _nbDeposits;
    _totalAmount += deposit;
    std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount << ";deposit:"
        << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits<< std::endl;
}
bool	Account::makeWithdrawal(int withdrawal)
{
    int p_amount;

    p_amount = _amount;
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
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created"
        << std::endl;
    _nbAccounts = i;
    _totalAmount += _amount;
}
Account::~Account(void)
{
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed"
        << std::endl;
}
void	Account::displayAccountsInfos(void)
{
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount <<
        ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
    return;
}