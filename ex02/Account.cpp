#include <iostream>
#include <iomanip>
#include "Account.hpp"
#include <cstring>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts(){

	return (_nbAccounts);
}

int Account::getTotalAmount(){

	return (_totalAmount);
}

int Account::getNbDeposits(){

	return (_totalNbDeposits);
}

int Account::getNbWithdrawals(){

	return(_totalNbWithdrawals);
}

void Account::displayAccountsInfos(){

	_displayTimestamp ();
	std::cout << " accounts:" << Account::getNbAccounts() << ";"
	<< "total:" << Account::getTotalAmount() << ";"
	<< "deposits:" << Account::getNbDeposits() << ";"
	<< "withdrawals:" << Account::getNbWithdrawals() <<std::endl;
}

Account::Account( int initial_deposit ): 
_amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) {

	_displayTimestamp ();
	this->_accountIndex = _nbAccounts;
	std::cout << " index:" << this->_accountIndex << ";"
	<< "amount:" << this->_amount << ";"
	<< "created" << std::endl;
	_nbAccounts++;
	_totalAmount += this->_amount;
}

Account::~Account(){

	_displayTimestamp ();
	std::cout << " index:" << this->_accountIndex << ";"
	<< "amount:" << this->_amount << ";"
	<< "closed" <<std::endl;

}
//The order in which the destructors are called may differ depending on
//your compiler/operating system. So your destructors may be called in
//a reverse order.

void Account::makeDeposit( int deposit){

	_displayTimestamp ();
	std::cout << " index:" << this->_accountIndex << ";"
	<< "p_amount:" << this->_amount << ";"
	<< "deposit:" << deposit << ";";
	this->_amount += deposit;
	this->_nbDeposits++;
	std::cout << "amount:" << _amount << ";"
	<< "nb_deposits:" << this->_nbDeposits <<std::endl;
	_totalNbDeposits++;
	_totalAmount += deposit;
}

bool Account::makeWithdrawal( int withdrawal){

	_displayTimestamp ();
	std::cout << " index:" << this->_accountIndex << ";"
	<< "p_amount:" << this->_amount << ";";
	if (this->checkAmount() < withdrawal){

		std::cout << "withdrawal:refused" <<std::endl;
		return (0);
	}
	else{
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		_totalNbWithdrawals++;
		_totalAmount -= withdrawal;
		std::cout << "withdrawal:" << withdrawal << ";"
		<< "amount:" << this->_amount << ";"
		<< "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	}
	return (1);
}

int	Account::checkAmount() const{

	return (this->_amount);
}

void Account::displayStatus() const{

	_displayTimestamp ();
	std::cout << " index:" << this->_accountIndex << ";"
	<< "amount:" << this->_amount << ";"
	<< "deposits:" << this->_nbDeposits << ";"
	<< "withdrawals:" << this->_nbWithdrawals <<std::endl;

}

void Account::_displayTimestamp ()
{
	std::time_t	timer;
	std::tm	*time_struct; //Structure containing a calendar date and time broken down into its components.
	char	timestamp[18];

	std::time(&timer);
	if (timer == -1){
		std::cout << "function could not retrieve the calendar time" << std::endl;
	}
	time_struct = std::localtime(&timer); //Uses the value pointed by timer to fill a tm structure with the values that represent the corresponding time, expressed for the local timezone
	if (!timer){
		std::cout << "could not fill tm struct" << std::endl;
	}
	std::strftime(timestamp, sizeof(timestamp), "[%Y%m%d_%H%M%S]", time_struct); //Copies into timestamp the content "[%Y%m%d_%H%M%S]" expanding its format specifiers into the corresponding values that represent the time described in time_struct, with a limit of characters.
	std::cout << timestamp;
}

//when do you really have to put Account:: in front?
//only in main, but not class functions themsleves?