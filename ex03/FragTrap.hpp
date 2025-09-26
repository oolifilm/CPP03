/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <leaugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 23:43:22 by leaugust          #+#    #+#             */
/*   Updated: 2025/09/26 15:59:11 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
    public:
        FragTrap();                              
        FragTrap(const std::string &name);      
        FragTrap(const FragTrap &other);          
        FragTrap& operator=(const FragTrap &other);
        virtual ~FragTrap();
        void attack(const std::string &target);
        void highFivesGuys();
};

#endif