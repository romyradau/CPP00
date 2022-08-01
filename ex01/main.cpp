#include "PhoneBook.hpp"

int main() {

    std::string input;
    PhoneBook phonebook;

    std::getline(std::cin, input);
    while (input.compare("EXIT") != 0)
    {
        if (input.compare("ADD") == 0){
            phonebook.add();
            std::cout << "type ADD, SEARCH or EXIT" << std::endl;
        }
        else if (input.compare("SEARCH") == 0){
            phonebook.search();
            std::cout << "type ADD, SEARCH or EXIT" << std::endl;
        }
        else{
            std::cout << "type ADD, SEARCH or EXIT goddammit!" << std::endl;
        }
        std::getline(std::cin, input);
    }
    return (0);
}
