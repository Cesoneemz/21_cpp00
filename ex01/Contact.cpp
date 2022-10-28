/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlanette <wlanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:57:39 by wlanette          #+#    #+#             */
/*   Updated: 2022/10/28 17:05:51 by wlanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
    this->_name = "First name";
    this->_lastName = "Last name";
    this->_nickName = "Nickname";
    this->_phone = "Phone";
    this->_darkestSecret = "Darkest secret";
    return ;
}

Contact::~Contact(void)
{
    return ;
}

void    Contact::ft_set_name(std::string str)
{
    this->_name = str;
}

void     Contact::ft_set_lastName(std::string str)
{
    this->_lastName = str;
}

void     Contact::ft_set_nickName(std::string str)
{
    this->_nickName = str;
}

void     Contact::ft_set_phone(std::string str)
{
    this->_phone = str;
}

void     Contact::ft_set_darkestSecret(std::string str)
{
    this->_darkestSecret = str;
}

std::string Contact::ft_get_name(void)
{
    return (this->_name);
}

std::string Contact::ft_get_lastName(void)
{
    return (this->_lastName);
}

std::string Contact::ft_get_nickName(void)
{
    return (this->_name);
}

std::string Contact::ft_get_phone(void)
{
    return (this->_phone);
}

std::string Contact::ft_get_darkestSecret(void)
{
    return (this->_darkestSecret);
}