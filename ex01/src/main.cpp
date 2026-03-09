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

int	main(void) {
    ScavTrap scavy("Hive bot");
    std::cout << std::endl;

    std::cout << "STAT CHECK" << std::endl;
    std::cout << "Name: " << scavy.getName() << std::endl;
    std::cout << "HP:   " << scavy.getHp() << " (Expected: 100)" << std::endl;
    std::cout << "EP:   " << scavy.getEp() << " (Expected: 50)" << std::endl;
    std::cout << "DMG:  " << scavy.getDmg() << " (Expected: 20)" << std::endl;
    std::cout << std::endl;

    std::cout << "SCAVTRAP CLASS ABILITY" << std::endl;
    scavy.guardGate();
    std::cout << std::endl;

    std::cout << "INHERITED CLASS ACTIONS" << std::endl;
    scavy.attack("a random Bandit");
    std::cout << "EP after attack: " << scavy.getEp() << " (Expected: 49)" << std::endl;
    std::cout << std::endl;
	scavy.takeDamage(10);
	std::cout << "HP:   " << scavy.getHp() << " (Expected: 90)" << std::endl;
	scavy.beRepaired(15);
	std::cout << "HP:   " << scavy.getHp() << " (Expected: 100)" << std::endl;
	std::cout << std::endl;

    std::cout << "COPY & ASSIGNMENT (TWO COPIES)" << std::endl;
    {
        ScavTrap original("Original");
        ScavTrap copy2(original);
        
        ScavTrap copy3("copy3");
        copy3 = original;
        
		std::cout << "copy2 Name: " << copy2.getName() << std::endl;
        std::cout << "copy3 Name: " << copy3.getName() << std::endl;
    }
    std::cout << std::endl;

    return 0;
}