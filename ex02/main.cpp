/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <leaugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 19:38:52 by leaugust          #+#    #+#             */
/*   Updated: 2025/09/26 13:28:06 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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

    std::cout << "\nScavTrap\n" << std::endl;
    ScavTrap c("C");
	c.attack("D");
	c.takeDamage(5);
	c.beRepaired(5);
	for (int i = 0; i < 8; i++)
		c.attack("D");
	c.attack("D");
	c.beRepaired(1);
	c.takeDamage(10);
	c.attack("D");
	c.beRepaired(5);

    std::cout << "\nFragTrap\n" << std::endl;
    FragTrap e("E");
	e.attack("F");
	e.takeDamage(5);
	e.beRepaired(5);
	for (int i = 0; i < 8; i++)
		e.attack("F");
	e.attack("F");
	e.beRepaired(1);
	e.takeDamage(10);
	e.attack("F");
	e.beRepaired(5);
	return (0);
}
