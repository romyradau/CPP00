#include "PhoneBook.hpp"

int main() {

    std::string input;
    PhoneBook phonebook;

    getline(std::cin, input);
    while (input.compare("EXIT") != 0)
    {
        if (input.compare("ADD") == 0){
            phonebook.add();
            std::cout << "type ADD, Search or EXIT" << std::endl;
        }
        // if (input.compare("SEARCH") == 0){
        //     phonebook.search(phonebook);
        //     std::cout << "type ADD, Search or EXIT" << std::endl;
        // }
        else
            std::cout << "type ADD, SEARCH or EXIT goddammit!" << std::endl;
        getline(std::cin, input);
    }
    // phonebook.exit(phonebook);
    // //wie sieht's heir aus mit free oder so?


    // std::cout << firstContact.set_firstName() << std::endl;
    // std::cout << firstContact.set_lastName() << std::endl;
    // std::cout << firstContact.set_nickname() << std::endl;
    // std::cout << firstContact.set_phoneNumber() << std::endl;
    // std::cout << firstContact.set_darkestSecret() << std::endl;

    //printed sofort die eingabe aus

     
    // std::getline(std::cin, firstContact.set_firstName);
    // std::getline(std::cin, firstContact->lastName);
    // std::getline(std::cin, firstContact->nickname);
    // std::getline(std::cin, firstContact->phoneNumber);
    // std::getline(std::cin, firstContact->darkestSecret);

    // std::cout << "firstName = " << this->firstName << std::endl;
    // std::cout << "lastName = " << this->lastName << std::endl;
    // std::cout << "nickname = " << this->nickname << std::endl;
    // std::cout << "phoneNumber = " << this->phoneNumber << std::endl;
    // std::cout << "darkestSecret = " << this->darkestSecret << std::endl;

    // std::cout << "firstName = " << firstContact.firstName << std::endl;
    // std::cout << "lastName = " << firstContact.lastName << std::endl;
    // std::cout << "nickname = " << firstContact.nickname << std::endl;
    // std::cout << "phoneNumber = " << firstContact.phoneNumber << std::endl;
    // std::cout << "darkestSecret = " << firstContact.darkestSecret << std::endl;

    //needs the getter shit
    return (0);
}