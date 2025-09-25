/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <leaugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 23:09:19 by leaugust          #+#    #+#             */
/*   Updated: 2025/09/25 23:40:23 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("DefaultScav") {
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap " << _name << " created (default constructor)" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap " << _name << " created (name constructor)" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
    *this = other;
    std::cout << "ScavTrap " << _name << " created (copy constructor)" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other) {
    if (this != &other)
        ClapTrap::operator=(other);
    std::cout << "ScavTrap " << _name << " assigned" << std::endl;
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << _name << " destroyed" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (_hitPoints <= 0 || _energyPoints <= 0) {
        std::cout << "ScavTrap " << _name << " can't attack (no more hit points or energy points left)" << std::endl;
        return;
    }
    _energyPoints--;
    std::cout << "ScavTrap " << _name << " strikes " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << _name << " is now in Gate Keeper mode." << std::endl;
}