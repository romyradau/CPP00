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

void Contact::set_firstName(){

    std::getline(std::cin, this->firstName);
    while(this->firstName.empty()){
        std::cout << "Enter a fucking first name!" << std::endl;
        std::getline(std::cin, this->firstName);
    }
}

std::string Contact::get_firstName() const{

    return (this->firstName);
}

void Contact::set_lastName(){

    std::getline(std::cin, this->lastName);
    while(this->lastName.empty()){
        std::cout << "Enetr a fucking last name!" << std::endl;
        std::getline(std::cin, this->lastName);
    }
}

std::string Contact::get_lastname() const{

    return (this->lastName);
}

void Contact::set_nickname(){

    std::getline(std::cin, this->nickname);
    while(this->nickname.empty()){
        std::cout << "Enter a fucking nickname!" << std::endl;
        std::getline(std::cin, this->nickname);
    }
}

std::string Contact::get_nickname() const{

    return (this->nickname);
}

void Contact::set_phoneNumber(){

    std::getline(std::cin, this->phoneNumber);
    while(this->phoneNumber.empty()){
        std::cout << "Enter a fucking phone number!" << std::endl;
        std::getline(std::cin, this->phoneNumber);
    }
}

std::string Contact::get_phoneNumber() const{

    return (this->phoneNumber);
}

void Contact::set_darkestSecret(){

    std::getline(std::cin, this->darkestSecret);
    while(this->darkestSecret.empty()){
        std::cout << "Come on we all have dark secrets!" << std::endl;
        std::getline(std::cin, this->darkestSecret);
    }
}

std::string Contact::get_darkestSecret() const{

    return (this->darkestSecret);
}

std::string Contact::set_value(std::string field){
    std::getline(std::cin, field);
    return (field);
}