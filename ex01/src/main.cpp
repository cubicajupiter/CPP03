/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 15:29:06 by jvalkama          #+#    #+#             */
/*   Updated: 2026/03/08 14:12:24 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
    ScavTrap scavy("Scavy-Unit");
    std::cout << std::endl;

    std::cout << "STAT CHECK" << std::endl;
    std::cout << "Name: " << scavy.getName() << std::endl;
    std::cout << "HP:   " << scavy.getHp() << " (Expected: 100)" << std::endl;
    std::cout << "EP:   " << scavy.getEp() << " (Expected: 50)" << std::endl;
    std::cout << "DMG:  " << scavy.getDmg() << " (Expected: 20)" << std::endl;
    std::cout << std::endl;

    std::cout << "SCAVTRAP UNIQUE ABILITY" << std::endl;
    scavy.guardGate();
    std::cout << std::endl;

    std::cout << "INHERITED ACTION TEST" << std::endl;

    scavy.attack("a random Bandit");
    std::cout << "EP after attack: " << scavy.getEp() << " (Expected: 49)" << std::endl;
    std::cout << std::endl;

    std::cout << "COPY & ASSIGNMENT" << std::endl;
    {
        ScavTrap original("Original-Scav");
        ScavTrap copy(original);
        
        ScavTrap assigned("Temporary");
        assigned = original;
        
        std::cout << "Assigned Name: " << assigned.getName() << std::endl;
    }
    std::cout << std::endl;

    return 0;
}