/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlanette <wlanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:06:44 by wlanette          #+#    #+#             */
/*   Updated: 2022/10/28 19:22:43 by wlanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include "Contact.hpp"

class PhoneBook
{
    public:
            PhoneBook(void);
            ~PhoneBook(void);

            void    ft_add(void);
            void    ft_search(void);

    private:
            Contact _contacts[8];
            void    _ft_display_header(void);
            void    _ft_print_contact(int index);
            int     _count;
            int     _index;
};

#endif