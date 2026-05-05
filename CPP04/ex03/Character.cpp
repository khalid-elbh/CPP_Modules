#include "Character.hpp"

Character::Character(void)
{
    for (int i = 0; i < 4; i++)
    {
        this->Inventory[i] = NULL;
    }
    std::cout << "default constructor is called for Character" << std::endl;
}
Character::Character(const std::string &Name) : Name(Name)
{
    for (int i = 0; i < 4; i++)
    {
        this->Inventory[i] = NULL;
    }
    std::cout << "parameterized constructor is called for Character" << std::endl;
}
Character::Character(const Character &other) : Name(other.Name)
{
    for (int i = 0; i < 4; i++)
    {
        Inventory[i] = other.Inventory[i]->clone();
    }
    std::cout << "copy constructor is called for Character" << std::endl;
}
Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        delete Inventory[i];
    }
    std::cout << "destructer is called for character" << std::endl;
}
Character &Character::operator=(const Character &other)
{
    if (this != &other)
    {
        Name = other.Name;
        for (int i = 0; i < 4; i++)
        {
            delete Inventory[i];
            Inventory[i] = NULL;
            if (other.Inventory[i])
                Inventory[i] = other.Inventory[i]->clone();
        }
    }
    std::cout << "copy assignment operator is called for charater" << std::endl;
    return *this;
}
std::string const &Character::getName() const
{
    return Name;
}
void Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (Inventory[i] == NULL)
        {
            Inventory[i] = m;
            return;
        }
    }
    delete m;
}
void Character::unequip(int idx)
{
    if (idx < 0 || idx > 4)
        return;
    Inventory[idx] = NULL;
}
void Character::use(int idx, ICharacter &target)
{
    if (idx < 0 || idx > 4)
        return;
    if (Inventory[idx] != NULL)
        Inventory[idx]->use(target);
}