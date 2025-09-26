/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <leaugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 23:43:09 by leaugust          #+#    #+#             */
/*   Updated: 2025/09/26 13:52:09 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("DefaultFrag") {
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap " << _name << " created (default constructor)" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap " << _name << " created (name constructor)" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
    *this = other;
    std::cout << "FragTrap " << _name << " created (copy constructor)" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &other) {
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    std::cout << "FragTrap " << _name << " assigned (operator=)" << std::endl;
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << _name << " destroyed" << std::endl;
}

void FragTrap::attack(const std::string &target) {
    if (_hitPoints <= 0 || _energyPoints <= 0) {
        std::cout << "FragTrap " << _name << " can't attack ! No hit points or energy points left !" << std::endl;
        return;
    }
    _energyPoints--;
    std::cout << "FragTrap " << _name << " hit " << target << ", causing " << _attackDamage << " points of damage, now has " << _energyPoints << " energy points left !" << std::endl;
}

void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << _name << " requests a positive high-five !" << std::endl;
}
