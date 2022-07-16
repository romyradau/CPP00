#include <iostream>
#include <string>
#include <ctype.h>

#ifndef CONTACT_HPP
#define CONTACT_HPP

class   Contact {

    public:

        Contact(void);
        ~Contact(void);

        std::string    set_firstName(void);
        std::string    set_lastName(void);
        std::string    set_nickname(void);
        std::string    set_phoneNumber(void);
        std::string    set_darkestSecret(void);

    private:
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string phoneNumber;
        std::string darkestSecret; 
};


#endif