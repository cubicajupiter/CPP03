/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 15:29:04 by jvalkama          #+#    #+#             */
/*   Updated: 2026/03/08 14:01:22 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//DEFAULT CONSTRUCTOR
ClapTrap::ClapTrap(void) : _name("Robot"), _hp(10), _ep(10), _dmg(0), _max_hp(10) {
	std::cout << "Claptrap " << this->_name << " constructed!" << std::endl;
}

//COPY CONSTRUCTOR
ClapTrap::ClapTrap(const ClapTrap& other) : _name(other.getName()), _hp(other.getHp()), _ep(other.getEp()), _dmg(other.getDmg()), _max_hp(other.getMaxHp()) {
	std::cout << "Claptrap " << this->_name << " constructed!" << std::endl;
}

//NAME CONSTRUCTOR OVERLOAD
ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _ep(10), _dmg(0), _max_hp(10) {
	std::cout << "Claptrap " << this->_name << " constructed!" << std::endl;
}

//DESTRUCTOR
ClapTrap::~ClapTrap(void) {
	std::cout << "Claptrap " << this->_name << " destroyed." << std::endl;
}

//ASSIGNMENT OPERATOR OVERLOAD
ClapTrap&	ClapTrap::operator=(const ClapTrap& other) {
	std::cout << "Copy assignment operator called" << std::endl;
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
void	ClapTrap::attack(const std::string& target) {
	if (this->_hasHealth() && this->_hasEnergy()) {
		std::cout << "Claptrap " << this->_name << " attacks " << target \
				<< ", causing " << this->_dmg << " points of damage!" << std::endl;
		this->_ep--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hasHealth()) {
		if (amount >= this->_hp)
			this->_hp = 0;
		else
			this->_hp -= amount;
		std::cout << "Claptrap " << this->_name << " takes damage for " << amount << " HP." << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	int		actual_amount;

	if (this->_hasHealth() && this->_hasEnergy()) {
		if (this->_hp + amount > this->_max_hp)
			actual_amount = amount - ((this->_hp + amount) - this->_max_hp);
		else
			actual_amount = amount;
		this->_hp += actual_amount;
		std::cout << "Claptrap " << this->_name << " repaired for " << actual_amount << " HP." << std::endl;
		this->_ep--;
	}
}


//ADDITIONAL PRIVATE HELPERS
bool	ClapTrap::_hasHealth(void) const {
	if (this->_hp > 0)
		return true;
	std::cout << this->_name << " is RIP :(" << std::endl;
	return false;
}

bool	ClapTrap::_hasEnergy(void) const {
	if (this->_ep > 0)
		return true;
	std::cout << this->_name << " is out of juice." << std::endl;
	return false;
}


//GETTERS
std::string	ClapTrap::getName(void) const {
	return this->_name;
}

unsigned	ClapTrap::getHp(void) const {
	return this->_hp;
}

unsigned	ClapTrap::getEp(void) const {
	return this->_ep;
}

unsigned	ClapTrap::getDmg(void) const {
	return this->_dmg;
}

unsigned	ClapTrap::getMaxHp(void) const {
	return this->_max_hp;
}