# ifndef CONTACT_HPP_
# define CONTACT_HPP_

#include <string>
#include <iostream>
#include <iomanip>
#include "sstream"

class Contact
{
private:
    std::string	_firstName;
    std::string	_lastName;
    std::string	_nickName;
    std::string	_phoneNumber;
    std::string	_darkestSecret;
public:
    void    setFirstName(std::string str);
    void    setLastName(std::string str);
    void    setNickName(std::string str);
    void    setPhoneNumber(std::string str);
    void    setDarketSecret(std::string str);
    std::string	getFirstName(void);
    std::string	getLastName(void);
    std::string	getNickName(void);
    std::string	getPhoneNumber(void);
    std::string	getDarketSecret(void);
    void    print(void);
    void    printAll(void);
};

# endif