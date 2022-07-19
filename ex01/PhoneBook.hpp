#include <iostream>
#include <iomanip>
#include <cstring>
#include <ctype.h>
#include "Contact.hpp"

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

class   PhoneBook {


    public:

        PhoneBook(void);
        ~PhoneBook(void);

        void    add(void);
        void    search(void) const;
        void    display_phonebook() const;

    private:
        Contact con_entry[8];
        int     entry_counter;
            
};

#endif 

