/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 15:29:04 by jvalkama          #+#    #+#             */
/*   Updated: 2026/02/19 12:44:44 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//DEFAULT CONSTRUCTOR
ClapTrap::ClapTrap(void) : _name("Robot"), _hp(10), _ep(10), _dmg(0) {
	std::cout << "Claptrap " << this->_name << " constructed!" << std::endl;
}

//COPY CONSTRUCTOR
ClapTrap::ClapTrap(const ClapTrap& other) : _name(other.getName()), _hp(other.getHp()), _ep(other.getEp()), _dmg(other.getDmg()) {
	std::cout << "Claptrap " << this->_name << " constructed!" << std::endl;
}

//NAME CONSTRUCTOR OVERLOAD
ClapTrap::ClapTrap(std::string name, int hp=10, int ep=10, int dmg=0) : _name(name), _hp(hp), _ep(ep), _dmg(dmg) {
	std::cout << "Claptrap " << this->_name << " constructed!" << std::endl;
}

//DESTRUCTOR
ClapTrap::~ClapTrap(void) {
	std::cout << "Claptrap " << this->_name << " destroyed." << std::endl;
}

//ASSIGNMENT OPERATOR
ClapTrap&	ClapTrap::operator=(const ClapTrap& other) {
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_name = other.getName();
		this->_hp = other.getHp();
		this->_ep = other.getEp();
		this->_dmg = other.getDmg();
	}
	return *this;
}


//SUBJECT FUNCTIONS
void	ClapTrap::attack(const std::string& target)
{
	if (this->_hasHealth() && this->_hasEnergy()) {
		std::cout << "Claptrap " << this->_name << " attacks " << target << ", causing " << this->_dmg << " points of damage!" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "Claptrap " << this->_name << " takes damage for " << amount << " HP." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->_hp += amount;
	std::cout << "Claptrap " << this->_name << " repaired for " << amount << " HP." << std::endl;
}


//ADDITIONAL PRIVATE HELPERS
bool	ClapTrap::_hasHealth(void) const {
	return (this->_hp > 0);
}

bool	ClapTrap::_hasEnergy(void) const {
	return (this->_ep > 0);
}

//GETTERS
std::string	ClapTrap::getName(void) const {
	return this->_name;
}

int	ClapTrap::getHp(void) const {
	return this->_hp;
}

int	ClapTrap::getEp(void) const {
	return this->_ep;
}

int	ClapTrap::getDmg(void) const {
	return this->_dmg;
}

//SETTERS
void	ClapTrap::setName(std::string name) {
	this->_name = name;
}

void	ClapTrap::setHp(int amount) {
	this->_hp= amount;
}

void	ClapTrap::setEp(int amount) {
	this->_ep= amount;
}

void	ClapTrap::setDmg(int amount) {
	this->_dmg = amount;
}