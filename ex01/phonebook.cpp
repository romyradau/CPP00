#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void): full(false), entry_counter(0) {

    std::cout << std::setw(10) << "index|";
    std::cout << std::setw(10) << "first name|";
    std::cout << std::setw(10) << "last name|";
    std::cout << std::setw(10) << "nickname|" << std::endl;
    std::cout << "type ADD, Search or EXIT" << std::endl;
}

PhoneBook::~PhoneBook(void){

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
    //wie finde ich heraus ob da schon etwas drin ist?
}









// void    PhoneBook::search(PhoneBook phonebook) const{
//     //display the Phonebook
//     //I | first name | last name | nickname
//     //weird layout shit
//     //ask for specific Index
//     //then show all the contact info one field per line!

// }

// void    PhoneBook::exit(PhoneBook phonebook){
//     //hmm exit function taht only quits??
// }

// void    PhoneBook::replace_first(PhoneBook phonebook){
//     //changed con_entry[0] zu dem neuen input
// }