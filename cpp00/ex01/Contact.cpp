#include "Contact.hpp"

Contact::Contact(void) {

}

Contact::~Contact(void) {

}

void    Contact::add() {

    std::cout << std::endl << "*** NEW CONTACT ***" << std::endl << std::endl;
    std::cout << "First name: ";
    getline(std::cin, this->_first_name);
    std::cout << "Last name: ";
    getline(std::cin, this->_last_name);
    std::cout << "Nickname: ";
    getline(std::cin, this->_nickname);
    std::cout << "Phone number: ";
    getline(std::cin, this->_phone_number);
    std::cout << "Darkest secret: ";
    getline(std::cin, this->_darkest_secret);
    std::cout << "*Contact successfully added*" << std::endl;
    std::cout << "-----" << std::endl;
    _index = _nb_contacts;
    _nb_contacts++;
}

void    Contact::print_columns() {
    
    std::string requested_id;

    if (this->_first_name.empty() && this->_last_name.empty() && this->_nickname.empty() && _nb_contacts == 1)
    {
        std::cout << "No data available" << std::endl;
        return ;
    }
    if (this->_index == 0)
    {
        std::cout << std::endl;
        std::cout << std::right << std::setw(10) << "Index" << "|";
        std::cout << std::right << std::setw(10) << "First name" << "|";
        std::cout << std::right << std::setw(10) << "Last name" << "|";
        std::cout << std::right << std::setw(10) << "Nickname";
        std::cout << std::endl;
    }
    if (!this->_first_name.empty() || !this->_last_name.empty() || !this->_nickname.empty())
    {
        std::cout << std::right << std::setw(10) << this->_index << "|";
        if (this->_first_name.length() >= 10)
            std::cout << std::right << std::setw(10)
                << this->_first_name.substr(0, 10).replace(9, 1, ".") << "|";
        else
            std::cout << std::right << std::setw(10) << this->_first_name << "|";
        if (this->_last_name.length() >= 10)
            std::cout << std::right << std::setw(10)
                << this->_last_name.substr(0, 10).replace(9, 1, ".") << "|";
        else
            std::cout << std::right << std::setw(10) << this->_last_name << "|";
        if (this->_nickname.length() >= 10)
            std::cout << std::right << std::setw(10)
                << this->_nickname.substr(0, 10).replace(9, 1, ".");
        else
            std::cout << std::right << std::setw(10) << this->_nickname;
        std::cout << std::endl;
    }
}

void    Contact::print_details() {

    std::cout << std::endl << "Id: " << this->_index << std::endl;
    std::cout << "First name: " << this->_first_name << std::endl;
    std::cout << "Last name: " << this->_last_name << std::endl;
    std::cout << "Nickname: " << this->_nickname << std::endl;
    std::cout << "Phone number: " << this->_phone_number << std::endl;
    std::cout << "Darkest secret: " << this->_darkest_secret << std::endl;
    std::cout << std::endl;
}

std::string Contact::get_first_name() {

    return (this->_first_name);
}

std::string Contact::get_last_name() {

    return (this->_last_name);
}

std::string Contact::get_nickname() {

    return (this->_nickname);
}

std::string Contact::get_phone_number() {

    return (this->_phone_number);
}

std::string Contact::get_darkest_secret() {

    return (this->_darkest_secret);
}

int Contact::get_index() {

    return (this->_index);
}

int Contact::_nb_contacts = 0;
