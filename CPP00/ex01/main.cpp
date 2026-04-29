#include "PhoneBook.hpp"

std::string fitColumnText(std::string str)
{
    if (str.length() > 10)
    {
        str = str.substr(0, 9) + ".";
    }
    return str;
}

int SEARCH(PhoneBook PhoneBook)
{
    for (int i = 0; i < PhoneBook.get_count(); i++)
    {
        Contact contact = PhoneBook.get_contact(i);
        std::cout << "|" << std::setw(10) << i << "|"
                  << std::setw(10) << fitColumnText(contact.getFirstName()) << "|"
                  << std::setw(10) << fitColumnText(contact.gettLastName()) << "|"
                  << std::setw(10) << fitColumnText(contact.getNickname()) << "|" << std::endl;
    }
    if (PhoneBook.get_count() < 1)
    {
        std::cout << "Phone book is empty" << std::endl;
        return 1;
    }
    std::cout << "Select the index of the entry to show:" << std::endl;
    std::string input;
    if (!getline(std::cin, input))
        return -1;
    int index = input[0] - '0';
    if(input.size() != 1 || index > PhoneBook.get_count() || index < 0)
    {
        std::cout << "invalid index !" << std::endl;
        return 1;
    }
    Contact con = PhoneBook.get_contact(index);
    std::cout << "contact information :" << std::endl;
    std::cout << "first name : " << con.getFirstName() << std::endl;
    std::cout << "last name : " << con.gettLastName() << std::endl;
    std::cout << "nickname : " << con.getNickname() << std::endl;
    std::cout << "phone number : " << con.getPhoneNumber() << std::endl;
    std::cout << "darkest secret : " << con.getDarkestSecret() << std::endl;
    return 0;
}

Contact create_contact(int *f)
{
    std::string input;
    Contact cont;
    std::cout << "->first name :" << std::endl;
    if (!getline(std::cin, input))
        return (*f = 1, cont);
    cont.setFirstName(input);
    std::cout << "->last name :" << std::endl;
    if (!getline(std::cin, input))
        return (*f = 1, cont);
    cont.setLastName(input);
    std::cout << "->nickname :" << std::endl;
    if (!getline(std::cin, input))
        return (*f = 1, cont);
    cont.setNickname(input);
    std::cout << "->phone number :" << std::endl;
    if (!getline(std::cin, input))
        return (*f = 1, cont);
    cont.setPhoneNumber(input);
    std::cout << "->darkest secret :" << std::endl;
    if (!getline(std::cin, input))
        return (*f = 1, cont);
    cont.setDarkestSecret(input);
    return cont;
}
int main()
{
    PhoneBook phonebook;
    std::string input;
    int f = 0;
    while (true)
    {
        std::cout << "Enter a valid command (ADD / SEARCH / EXIT):" << std::endl;
        if (!getline(std::cin, input))
            break;
        if (input == "ADD")
        {
            Contact new_cont = create_contact(&f);
            if (f == 1)
                return (1);
            if (new_cont.is_empty() || !(new_cont.is_number()))
            {
                std::cout << "Error: Empty fields are not allowed, and the phone number must contain only digits." << std::endl;
                continue;
            }
            phonebook.add_contact(new_cont);
        }
        else if (input == "SEARCH")
        {
            if (SEARCH(phonebook) == -1)
                return 1;
        }
        else if (input == "EXIT")
            return (0);
        else
            std::cout << "invalid command" << std::endl;
    }
}