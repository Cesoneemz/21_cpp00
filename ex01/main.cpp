/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlanette <wlanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:06:03 by wlanette          #+#    #+#             */
/*   Updated: 2022/10/28 20:07:50 by wlanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook   phonebook;
    std::string command;

    while (1)
    {
        std::cout << "Enter a command: ";
        std::cin >> command;
        if (!command.compare("ADD"))
            phonebook.ft_add();
        else if (!command.compare("SEARCH"))
            phonebook.ft_search();
        else if (!command.compare("EXIT"))
            break ;
        else
            std::cout << "Invalid command. Try [ADD, SEARCH, EXIT]" << std::endl;
    }
    return (0);
}