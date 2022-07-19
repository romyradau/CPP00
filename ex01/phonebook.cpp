#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void): entry_counter(0) {
    display_phonebook();
    std::cout << "type ADD, SEARCH or EXIT" << std::endl;
}

PhoneBook::~PhoneBook(void){

}

void    PhoneBook::display_phonebook(void) const{
    int i;
    i = 0;

    //schau dir heir bitte an wie man gescheit inkrementiert!

    std::cout << std::setw(10) << "index|";
    std::cout << std::setw(10) << "first name|";
    std::cout << std::setw(11) << "last name|";
    std::cout << std::setw(11) << "nickname|" << std::endl;
    while (i < 8)
    {
        std::cout << std::setw(9) << i + 1 << "|";
        if (con_entry[i].get_firstName().size() >= 10)
            std::cout << std::setw(8) <<con_entry[i].get_firstName().substr(0,9) << "." << "|";
        else
        std::cout << std::setw(10) << con_entry[i].get_firstName() << "|";
        if (con_entry[i].get_lastname().size() >= 10)
            std::cout << std::setw(8) <<con_entry[i].get_lastname().substr(0,9) << "." << "|";
        else
        std::cout << std::setw(10) << con_entry[i].get_lastname() << "|";
        if (con_entry[i].get_nickname().size() >= 10)
            std::cout << std::setw(8) <<con_entry[i].get_nickname().substr(0,9) << "." << "|" <<std::endl;
        else
        std::cout << std::setw(10) << con_entry[i].get_nickname() << "|" << std::endl;
        i++;
    }
    std::cout << std::endl;
}

void    PhoneBook::add(void){

    std::cout << "Enter first name:" << std::endl;
    con_entry[entry_counter].set_firstName();
    std::cout << "Enter last name:" << std::endl;
    con_entry[entry_counter].set_lastName();
    std::cout << "Enter nickname:" << std::endl;
    con_entry[entry_counter].set_nickname();
    std::cout << "Enter phone number:" <<std::endl;
    con_entry[entry_counter].set_phoneNumber();
    std::cout << "Enter darkest secret:" << std::endl;
    con_entry[entry_counter].set_darkestSecret();
    entry_counter = (entry_counter + 1) % 8;

}

void    PhoneBook::search(void) const{
    int index;

    display_phonebook();
    std::cout << "Enter index" << std::endl;
    std::cin >> index;
    while ((entry_counter && index > entry_counter) || index < 1){

        std::cout << "there's no entry with that index" << std::endl;
        std::cin >> index;
    }
    std::cout << std::endl << con_entry[index - 1].get_firstName() << std::endl;
    std::cout << con_entry[index - 1].get_lastname() << std::endl;
    std::cout << con_entry[index - 1].get_nickname() << std::endl;
    std::cout << con_entry[index - 1].get_phoneNumber() << std::endl;
    std::cout << con_entry[index - 1].get_darkestSecret() << std::endl;
    std::cin.ignore();

}
//wo genau benutzt man upperCamelcase?
//warum muss ich bei getline nicht std:: davor schreiben?
//setw genau verstehn ?!