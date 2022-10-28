/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlanette <wlanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:52:00 by wlanette          #+#    #+#             */
/*   Updated: 2022/10/28 17:28:42 by wlanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
    public:
            Contact(void);
            ~Contact(void);

            std::string ft_get_name(void);
            std::string ft_get_lastName(void);
            std::string ft_get_nickName(void);
            std::string ft_get_phone(void);
            std::string ft_get_darkestSecret(void);
            void        ft_set_name(std::string str);
            void        ft_set_lastName(std::string str);
            void        ft_set_nickName(std::string str);
            void        ft_set_phone(std::string str);
            void        ft_set_darkestSecret(std::string str);

    private:
            std::string _name;
            std::string _lastName;
            std::string _nickName;
            std::string _phone;
            std::string _darkestSecret;

};

#endif