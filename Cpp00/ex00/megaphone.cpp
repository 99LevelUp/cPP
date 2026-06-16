/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggabor <ggabor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 12:39:29 by ggabor            #+#    #+#             */
/*   Updated: 2026/05/20 16:38:10 by ggabor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>


int main(int ac, char **av)
{
    int i = 1;
    int j;
    
    if (ac == 1)
       std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        while(i < ac )
        {
            j = 0;
            while(av[i][j] != '\0')
            {
                std::cout << (char) std::toupper(av[i][j]);
                j++;
            }
        i++;
        }
        std::cout << std::endl;      
        
    }
    return(0);        
}