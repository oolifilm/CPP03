/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <leaugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 19:38:52 by leaugust          #+#    #+#             */
/*   Updated: 2025/09/26 13:29:32 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
    std::cout << "\nClapTrap\n" << std::endl;
	ClapTrap a("A");
	a.attack("B");
	a.takeDamage(5);
	a.beRepaired(5);
	for (int i = 0; i < 8; i++)
		a.attack("B");
	a.attack("B");
	a.beRepaired(1);
	a.takeDamage(10);
	a.attack("B");
	a.beRepaired(5);
	return (0);
}
