/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <leaugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 19:38:52 by leaugust          #+#    #+#             */
/*   Updated: 2025/09/25 23:41:50 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    ClapTrap leanne("Leanne");
    ScavTrap julien("Julien");

    julien.attack("Alexandre");
    julien.takeDamage(30);
    julien.beRepaired(20);
    julien.guardGate();
    
    return 0;
}