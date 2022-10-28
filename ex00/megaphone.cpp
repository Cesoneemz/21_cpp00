/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlanette <wlanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:46:02 by wlanette          #+#    #+#             */
/*   Updated: 2022/10/28 16:50:43 by wlanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void    ft_str_to_upper(char *str)
{
    while (*str)
    {
        *str = toupper(*str);
        str++;
    }
} 

int main(int argc, char **argv)
{
    int index;

    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    else
    {
        index = 1;
        while (argv[index])
        {
            ft_str_to_upper(argv[index]);
            std::cout << argv[index];
            index++;
        }
        std::cout << std::endl;
    }
    return (0);
}