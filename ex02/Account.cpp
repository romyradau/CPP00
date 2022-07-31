#include <iostream>
#include <iomanip>
#include <cstring>
#include <ctype.h>
#include <ctime>
#include <ratio>
#include <chrono>
#include "Account.hpp"

int main ()
{
	std::time_t	timer;
	std::tm	*time_struct; //Structure containing a calendar date and time broken down into its components.
	char	timestamp[18];
	//inwieweit kann das probleme machen, wegen space undso??

	std::time(&timer);
	if (timer == -1){
		std::cout << "function could not retrieve the calendar time" << std::endl;
		return (1);
	}
	time_struct = std::localtime(&timer); //Uses the value pointed by timer to fill a tm structure with the values that represent the corresponding time, expressed for the local timezone
	if (!timer){
		std::cout << "could not fill tm struct" << std::endl;
		return (1);
	}
	std::strftime(timestamp, sizeof(timestamp), "[%Y%m%d_%H%M%S]", time_struct);
	// timestamp[17] = '\0';
	//Copies into timestamp the content "[%Y%m%d_%H%M%S]" expanding its format specifiers into the corresponding values that represent the time described in time_struct, with a limit of characters.
	std::cout << timestamp << std::endl;
	return (0);
}