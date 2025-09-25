/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <leaugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 23:09:23 by leaugust          #+#    #+#             */
/*   Updated: 2025/09/25 23:31:17 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    public:
        ScavTrap();
        ScavTrap(const std::string &name);
        ScavTrap(const ScavTrap &other);
        ScavTrap& operator=(const ScavTrap &other);
        virtual ~ScavTrap();
        void attack(const std::string &target);
        void guardGate();
};

#endif