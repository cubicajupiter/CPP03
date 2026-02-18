/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 16:42:38 by jvalkama          #+#    #+#             */
/*   Updated: 2026/02/18 16:59:40 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

//DEFAULT CONSTRUCTOR
ScavTrap::ScavTrap(void) : _name("Scavvie"), _hp(100), _ep(50), _dmg(20) {
	std::cout << "ScavTrap " << this->_name << " constructed!" << std::endl;
}

//COPY CONSTRUCTOR
ScavTrap::ScavTrap(const ClapTrap& other) : _name(other.getName()), _hp(other.getHp()), _ep(other.getEp()), _dmg(other.getDmg()) {
	std::cout << "ScavTrap " << this->_name << " constructed!" << std::endl;
}

//NAME CONSTRUCTOR OVERLOAD
ScavTrap::ScavTrap(std::string name) : _name(name), _hp(100), _ep(50), _dmg(20) {
	std::cout << "ScavTrap " << this->_name << " constructed!" << std::endl;
}

//DESTRUCTOR
ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap " << this->_name << " destroyed." << std::endl;
}


//SUBJECT FUNCTIONS
void	ScavTrap::guardGate(void) {
	;
}