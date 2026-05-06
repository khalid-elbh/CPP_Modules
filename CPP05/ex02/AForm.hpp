#ifndef AForm_HPP
#define AForm_HPP

#include <iostream>
#include <string>
#include <fstream>

class Bureaucrat;
class AForm
{
private:
    const std::string Name;
    bool IsSigned;
    const int SignGrade;
    const int ExecGrade;

public:
    AForm(void);
    AForm(std::string Name, int SignGrade, int ExecGrade);
    AForm(const AForm &other);
    virtual ~AForm();
    AForm &operator=(const AForm &other);
    std::string getName() const;
    int getSignGrade() const;
    int getExecGrade() const;
    bool getIsSigned() const;
    void beSigned(const Bureaucrat &b);
    virtual void execute(Bureaucrat const & executor) const = 0;
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
    class NotSignedException: public std::exception{
        public:
            const char *what() const throw();
    };
};

std::ostream &operator<<(std::ostream &os, const AForm &AForm);
#endif