#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    for(int i = 0; i < 4 ; i++)
    {
        this->Materias[i] = NULL;
    }
    std::cout << "default constructor is called for MateriaSource" << std::endl;
}
MateriaSource::MateriaSource(const MateriaSource& other)
{
    for (int i = 0; i < 4; i++){
        this->Materias[i] = other.Materias[i];
    }
    std::cout << "copy constructor is called for MateriaSource" << std::endl;
}
MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
    if (this != &other){
        for (int i = 0; i < 4 ;i++){
            delete this->Materias[i];
            this->Materias[i] = other.Materias[i];
        }
    }
    std::cout << "copy assignment operator is called for MateriaSource" << std::endl;
    return *this;
}
MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++){
        delete this->Materias[i];
    }
    std::cout << "destructor is called for MateriaSource" << std::endl;
}

void MateriaSource::learnMateria(AMateria* m){
    for (int i = 0; i < 4; i++){
        if (!(this->Materias[i]))
        {
            this->Materias[i] = m->clone();
            delete m;
            return;
        }
    }
    delete m;
}
AMateria* MateriaSource::createMateria(std::string const & type){
    for (int i = 0; i < 4; i++){
        if (this->Materias[i] && this->Materias[i]->getType() == type)
            return this->Materias[i]->clone();
    }
    return 0;
}