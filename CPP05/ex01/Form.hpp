#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>

class Bureaucrat;
class Form
{
private:
    const std::string Name;
    bool IsSigned;
    const int SignGrade;
    const int ExecGrade;

public:
    Form(void);
    Form(std::string Name, int SignGrade, int ExecGrade);
    Form(const Form &other);
    ~Form();
    Form &operator=(const Form &other);
    std::string getName() const;
    int getSignGrade() const;
    int getExecGrade() const;
    bool getIsSigned() const;
    void beSigned(const Bureaucrat &b);
    class GradeTooHighException : public std::exception
    {
    public:
        const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
    public:
        const char *what() const throw();
    };
};

std::ostream &operator<<(std::ostream &os, const Form &form);
#endif