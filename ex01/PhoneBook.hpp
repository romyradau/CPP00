#include <iostream>
#include <iomanip>
#include <cstring>
#include <ctype.h>
#include "Contact.hpp"

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

class   PhoneBook {


    public:
        //sind schon alle da beim aufrufen
        //testen im costructor ob die gemacht wurden

        PhoneBook(void);
        ~PhoneBook(void);

        void    replace_first(PhoneBook phonebook);
        // void    store(void);
        void    add(void);
        void    search(PhoneBook phonebook) const;
        void    exit(PhoneBook phonebook);

    private:
        Contact con_entry[8];
        bool    full;
        int     entry_counter;
            
};

#endif 

