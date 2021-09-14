#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "Contact.hpp"

class Phonebook {
    
    private:

        Contact contacts[8];

    public:

        Phonebook();
        ~Phonebook();
        Contact  *getContacts();
};

#endif