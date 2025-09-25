/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <leaugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 19:38:52 by leaugust          #+#    #+#             */
/*   Updated: 2025/09/26 00:02:29 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    ClapTrap leanne("Leanne");

    leanne.attack("Julien");       
    leanne.takeDamage(3);       
    leanne.beRepaired(2);         

    for (int i = 0; i < 11; i++)
        leanne.attack("Julien");
    leanne.takeDamage(20);        
    leanne.attack("Julien");       
    leanne.beRepaired(10);   

    ClapTrap alexandre("Alexandre");
    alexandre.beRepaired(5);      
    alexandre.takeDamage(5);      
    alexandre.attack("Julien");  

    return 0;
}
