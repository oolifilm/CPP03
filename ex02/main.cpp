/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <leaugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 19:38:52 by leaugust          #+#    #+#             */
/*   Updated: 2025/09/26 00:01:30 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    ClapTrap leanne("Leanne");
    ScavTrap julien("Julien");
    FragTrap alexandre("Alexandre");

    julien.attack("Seyf");
    julien.takeDamage(30);
    julien.beRepaired(20);
    julien.guardGate();
    
    alexandre.attack("Seyf");
    alexandre.takeDamage(40);
    alexandre.beRepaired(25);
    alexandre.highFivesGuys();

    return 0;
}
