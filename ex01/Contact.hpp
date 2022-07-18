#include <iostream>
#include <string>
#include <ctype.h>

#ifndef CONTACT_HPP
#define CONTACT_HPP

class   Contact {

    public:

        Contact(void);
        ~Contact(void);

        void		set_firstName(void);
        void		set_lastName(void);
        void		set_nickname(void);
        void		set_phoneNumber(void);
        void		set_darkestSecret(void);
        std::string	set_value(std::string field);
        std::string	get_firstName() const;
        std::string	get_lastname() const;
        std::string	get_nickname() const;
        std::string	get_phoneNumber() const;
        std::string	get_darkestSecret() const;

    private:
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string phoneNumber;
        std::string darkestSecret; 
};


#endif