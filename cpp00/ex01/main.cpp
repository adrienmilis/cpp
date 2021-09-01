#include "Contact.hpp"
#include "Phonebook.hpp"

int main(int argc, char **argv)
{
    Phonebook   phonebook;
    std::string command;
    int         i;
    std::string requested_id;
    int         req_id;

    i = 0;
    std::cout << "Enter command: ";
    getline(std::cin, command);
    while (command.compare("EXIT") != 0)
    {
        if (command.compare("ADD") == 0)
        {
            if (i == 8)
                std::cout << "Phonebook is full" << std::endl;
            else
            {
                phonebook.contacts[i].add();
                i++;
            }
        }
        else if (command.compare("SEARCH") == 0)
        {
            if (i == 0)
                std::cout << "No data available" << std::endl;
            else {
                for (int j = 0; j < i; j++)
                    phonebook.contacts[j].print_columns();
                std::cout << "Enter id for more details: ";
                getline(std::cin, requested_id);
                try {
                    req_id = stoi(requested_id);
                    if (req_id <= i - 1)
                        phonebook.contacts[req_id].print_details();
                    else
                        std::cout << "Id is invalid" << std::endl;
                }
                catch (...) {
                    std::cout << "Id is invalid" << std::endl;
                }
            }
        }
        std::cout << "Enter command: ";
        getline(std::cin, command);
    }
    return (0);
}