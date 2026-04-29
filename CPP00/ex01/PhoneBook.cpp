#include "PhoneBook.hpp"


void PhoneBook::add_contact(Contact contact){
    if (i > 7)
        i = 0;
    contacts[i] = contact;
    i++;
    if (count < 8)
        count++;
}

Contact PhoneBook::get_contact(int index) const
{
    return contacts[index];
}

int PhoneBook::get_count()const
{
    return (count);
}