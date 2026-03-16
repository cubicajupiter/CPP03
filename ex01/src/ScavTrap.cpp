/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 16:42:38 by jvalkama          #+#    #+#             */
/*   Updated: 2026/03/08 14:12:25 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

//DEFAULT CONSTRUCTOR
ScavTrap::ScavTrap(void) : ClapTrap("Scavvie", 100, 50, 20) {
	std::cout << "ScavTrap " << this->getName() << " constructed!" << std::endl;
}

//COPY CONSTRUCTOR
ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other.getName(), other.getHp(), other.getEp(), other.getDmg()) {
	std::cout << "ScavTrap " << this->getName() << " constructed!" << std::endl;
}

//NAME CONSTRUCTOR OVERLOAD
ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20) {
	std::cout << "ScavTrap " << this->getName() << " constructed!" << std::endl;
}

//DESTRUCTOR
ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap " << this->getName() << " destroyed." << std::endl;
}

//ASSIGNMENT OPERATOR OVERLOAD
ScavTrap&	ScavTrap::operator=(const ScavTrap& other) {
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_name = other.getName();
		this->_hp = other.getHp();
		this->_ep = other.getEp();
		this->_dmg = other.getDmg();
		this->_max_hp = other.getMaxHp();
	}
	return *this;
}


//SUBJECT FUNCTIONS
void	ScavTrap::attack(const std::string& target) {
	if (this->_hasHealth() && this->_hasEnergy()) {
		std::cout << "ScavTrap " << this->_name << " attacks " << target \
				<< ", causing " << this->_dmg << " points of damage!" << std::endl;
		this->_ep--;
	}
}

void	ScavTrap::guardGate(void) {
	if (this->_hasEnergy()) {
		std::cout << "ScavTrap " << this->getName() << " is now in Gatekeeper mode." << std::endl;
		this->_ep--;
	}
}