#include <iostream>
#include <cstring>
#include <ctype.h>
#include "Contact.hpp"

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

class   PhoneBook {


    public:
        Contact    con_entry[8];

        PhoneBook(void);
        ~PhoneBook(void);

    void    replace_first(void);
    void    add(void);
    void    search(void);
    void    exit(void);

            
};

#endif 

