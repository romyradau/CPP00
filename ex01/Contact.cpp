#include "Contact.hpp"

Contact::Contact(void) {
    // std::getline(std::cin, this->firstName);
    // std::getline(std::cin, this->lastName);
    // std::getline(std::cin, this->nickname);
    // std::getline(std::cin, this->phoneNumber);
    // std::getline(std::cin, this->darkestSecret);

    // std::cout << "firstName = " << this->firstName << std::endl;
    // std::cout << "lastName = " << this->lastName << std::endl;
    // std::cout << "nickname = " << this->nickname << std::endl;
    // std::cout << "phoneNumber = " << this->phoneNumber << std::endl;
    // std::cout << "darkestSecret = " << this->darkestSecret << std::endl;

    // return ;
}

Contact::~Contact(void) {

}

std::string Contact::set_firstName(){

    std::getline(std::cin, this->firstName);
    return (this->firstName);
}

std::string Contact::set_lastName(){

    std::getline(std::cin, this->lastName);
    return (this->lastName);
}

std::string Contact::set_nickname(){

    std::getline(std::cin, this->nickname);
    return (this->nickname);
}

std::string Contact::set_phoneNumber(){

    std::getline(std::cin, this->phoneNumber);
    return (this->phoneNumber);
}

std::string Contact::set_darkestSecret(){

    std::getline(std::cin, this->darkestSecret);
    return (this->darkestSecret);
}