/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 11:44:40 by jvalkama          #+#    #+#             */
/*   Updated: 2026/02/19 12:47:52 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

//DEFAULT CONSTRUCTOR
FragTrap::FragTrap(void) : ClapTrap("Fraggy", 100, 100, 30) {
	std::cout << "FragTrap " << this->getName() << " default constructed!" << std::endl;
}

//COPY CONSTRUCTOR
FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other.getName(), other.getHp(), other.getEp(), other.getDmg()) {
	std::cout << "FragTrap " << this->getName() << " copy constructed!" << std::endl;
}

//NAME CONSTRUCTOR OVERLOAD
FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30) {
	std::cout << "FragTrap " << this->getName() << " constructed with name parameter!" << std::endl;
}

//DESTRUCTOR
FragTrap::~FragTrap(void) {
	std::cout << "FragTrap " << this->getName() << " destroyed." << std::endl;
}

//ASSIGNMENT OPERATOR
FragTrap&	FragTrap::operator=(const FragTrap& other) {
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_name = other.getName();
		this->_hp = other.getHp();
		this->_ep = other.getEp();
		this->_dmg = other.getDmg();
		this->_max_hp = other.getMaxHp();
	}
	return *this;
}

//SUBJECT FUNCTION
void	FragTrap::highFivesGuys(void) {
	if (this->_hasEnergy()) {
		std::cout << "FragTrap " << this->getName() << " requests positive high-fives." << std::endl;
		this->_ep--;
	}
}