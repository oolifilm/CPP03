/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <leaugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 19:38:48 by leaugust          #+#    #+#             */
/*   Updated: 2025/09/26 13:48:18 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
    : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "ClapTrap " << _name << " created (default constructor)" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name)
    : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "ClapTrap " << _name << " created (name constructor)" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
    *this = other;
    std::cout << "ClapTrap " << _name << " created (copy constructor)" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
    if (this != &other) {
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    std::cout << "ClapTrap " << _name << " assigned (operator=)" << std::endl;
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << _name << " destroyed\n" << std::endl;
}

void ClapTrap::attack(const std::string &target) {
    if (_hitPoints <= 0 || _energyPoints <= 0) {
        std::cout << "ClapTrap " << _name << " can't attack ! No hit points or energy points left !" << std::endl;
        return;
    }
    _energyPoints--;
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage, now has " << _energyPoints << " energy points left !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    _hitPoints -= static_cast<int>(amount);
    if(_hitPoints < 0)
        _hitPoints = 0;
    std::cout << "ClapTrap " << _name << " takes " << amount << " damage, now has " << _hitPoints << " hit points left !" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (_hitPoints <= 0 || _energyPoints <= 0) {
        std::cout << "ClapTrap " << _name << " can't be repaired ! No hit points or energy points left !" << std::endl;
        return;
    }
    _hitPoints += amount;
    _energyPoints--;
    std::cout << "ClapTrap " << _name << " repairs itself for " << amount << ", now has " << _hitPoints << " hit points left !" << std::endl;
}