/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlanette <wlanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:13:50 by wlanette          #+#    #+#             */
/*   Updated: 2022/10/28 21:51:43 by wlanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    this->_count = 0;
    this->_index = 0;
    return ;
}

PhoneBook::~PhoneBook(void)
{
    return ;
}

void    PhoneBook::ft_add(void)
{
    std::string name;
    std::string lastName;
    std::string nickName;
    std::string phone;
    std::string darkestSecret;

    if (this->_index >= 8)
        std::cout << "Replaced a oldest contact because phonebook is full" << std::endl;

    std::cout << "Enter first name: ";
    std::cin >> name;
    this->_contacts[this->_count % 8].ft_set_name(name);

    std::cout << "Enter last name: ";
    std::cin >> lastName;
    this->_contacts[this->_count % 8].ft_set_lastName(lastName);

    std::cout << "Enter nickname: ";
    std::cin >> nickName;
    this->_contacts[this->_count % 8].ft_set_nickName(nickName);

    std::cout << "Enter phone: ";
    std::cin >> phone;
    this->_contacts[this->_count % 8].ft_set_phone(phone);


    std::cout << "Enter darkest secret: ";
    std::cin >> darkestSecret;
    this->_contacts[this->_count % 8].ft_set_darkestSecret(darkestSecret);

    std::cout << "Contact has been succesfully created" << std::endl;

    this->_count++;
    if (this->_count <= 8)
        this->_index = this->_count;
}

void    PhoneBook::_ft_display_header(void)
{
    std::string header;
    std::string line(45, '-');

    header += "|";
    header += "     Index|";
    header += "      Name|";
    header += " Last Name|";
    header += "  Nickname|";
    std::cout << line << std::endl << header << std::endl << line << std::endl;
}

void    PhoneBook::_ft_print_contact(int index)
{
    std::string line(40, '-');
    
    std::cout << line << std::endl;
    std::cout << "First name: " << this->_contacts[index].ft_get_name() << std::endl;
    std::cout << "Last name: " << this->_contacts[index].ft_get_lastName() << std::endl;
    std::cout << "Nickname: " << this->_contacts[index].ft_get_nickName() << std::endl;
    std::cout << "Phone: " << this->_contacts[index].ft_get_phone() << std::endl;
    std::cout << "Darkest secret: " << this->_contacts[index].ft_get_darkestSecret() << std::endl;
    std::cout << line << std::endl;
}

void    PhoneBook::ft_search(void)
{
    std::string str;
    int         index;
    std::string line(45, '-');
    
    if (this->_count == 0)
    {
        std::cout << "No contacts in the Phonebook" << std::endl;
        return ;
    }
    this->_ft_display_header();
    for (int i = 0; i < this->_count && i < 8; i++)
    {
        std::cout << "|";
        std::cout << std::setw(10) << i;
        std::cout << "|";

        str = this->_contacts[i].ft_get_name();
        if (str.length() > 10)
            str = str.substr(0, 9) + ".";
        std::cout << std::setw(10) << str;
        std::cout << "|";

        str = this->_contacts[i].ft_get_lastName();
        if (str.length() > 10)
            str = str.substr(0, 9) + ".";
        std::cout << std::setw(10) << str;
        std::cout << "|";

        str = this->_contacts[i].ft_get_nickName();
        if (str.length() > 10)
            str = str.substr(0, 9) + ".";
        std::cout << std::setw(10) << str;
        std::cout << "|" << std::endl;
    }
    std::cout << line;
    std::cout << std::endl;
    std::cout << "Enter a search index: ";
    std::cin >> index;
    std::cin.clear();
    if (this->_count == 0)
    {
        std::cout << "Phonebook is empty. Add a contact first" << std::endl;
        return ;
    }
    else if (index >= this->_index || index > 8)
    {
        std::cout << "Invalid contact index number" << std::endl;
        return ;
    }
    this->_ft_print_contact(index);
}