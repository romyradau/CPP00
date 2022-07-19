#include "PhoneBook.hpp"

int main() {

    std::string input;
    PhoneBook phonebook;

    getline(std::cin, input);
    while (input.compare("EXIT") != 0)
    {
        if (input.compare("ADD") == 0){
            phonebook.add();
            std::cout << "type ADD, SEARCH or EXIT" << std::endl;
        }
        else if (input.compare("SEARCH") == 0){
            phonebook.search();
            std::cout << std::endl << "type ADD, SEARCH or EXIT" << std::endl;
            // input.clear();
        }
        else{
            std::cout << "type ADD, SEARCH or EXIT goddammit!" << std::endl;
        }
        // std::cin.clear();
        getline(std::cin, input);
    }
    // //wie sieht's heir aus mit free oder so?
    //warum funktioniert das else if so nicht?
    return (0);
}