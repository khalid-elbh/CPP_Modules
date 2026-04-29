#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <string>
#include <iomanip>

class PhoneBook
{
    Contact contacts[8];
    int     i;
    int count;
    public:
    PhoneBook()
    {
        i = 0;
        count = 0;
    }
    void add_contact(Contact contact);
    Contact get_contact(int index) const;
    int get_count()const;
};


#endif