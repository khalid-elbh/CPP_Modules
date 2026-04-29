#include "Contact.hpp"

//accessors

void Contact::setFirstName(std::string str)
{
    firstName = str;
}

void Contact::setLastName(std::string str)
{
    lastName = str;
}

void Contact::setNickname(std::string str)
{
    nickname = str;
}

void Contact::setPhoneNumber(std::string str)
{
    phoneNumber = str;
}

void Contact::setDarkestSecret(std::string str)
{
    darkestSecret = str;
}


std::string Contact::getFirstName() const
{
    return (firstName);
}

std::string Contact::gettLastName() const
{
    return (lastName);
}

std::string Contact::getPhoneNumber() const
{
    return (phoneNumber);
}

std::string Contact::getNickname() const
{
    return (nickname);
}

std::string Contact::getDarkestSecret() const
{
    return (darkestSecret);
}


bool Contact::is_empty() const
{
    return (firstName.empty() || lastName.empty() || nickname.empty() || phoneNumber.empty() || darkestSecret.empty());
}

bool Contact::is_number()const
{
    int len = phoneNumber.length();
    for (int i = 0; i < len; i++)
    {
        if (!isdigit(phoneNumber[i]))
            return 0;
    }
    return 1;
}