/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 16:42:38 by jvalkama          #+#    #+#             */
/*   Updated: 2026/02/19 12:44:43 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

//DEFAULT CONSTRUCTOR
ScavTrap::ScavTrap(void) : ClapTrap() {
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

ScavTrap&	ScavTrap::operator=(const ScavTrap& other) {
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	if (this != &other) {
		this->setName(other.getName());
		this->setHp(other.getHp());
		this->setEp(other.getEp());
		this->setDmg(other.getDmg());
	}
	return *this;
}

//DESTRUCTOR
ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap " << this->getName() << " destroyed." << std::endl;
}

//SUBJECT FUNCTIONS
void	ScavTrap::guardGate(void) {
	std::cout << "ScavTrap " << this->getName() << " is now in Gatekeeper mode." << std::endl;
}