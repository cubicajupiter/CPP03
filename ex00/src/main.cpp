/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 15:29:06 by jvalkama          #+#    #+#             */
/*   Updated: 2026/03/08 13:17:24 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
    ClapTrap clappyboi("clappyboi");
    ClapTrap target("dummy bot");

	std::cout << std::endl;
    std::cout << "BASIC ACTIONS (COSTS 1 EP)" << std::endl;
    std::cout << "clappyboi EP: " << clappyboi.getEp() << std::endl;
    clappyboi.attack("dummy bot");
    clappyboi.beRepaired(5);
    std::cout << "clappyboi EP: " << clappyboi.getEp() << " (Expected: 8)" << std::endl;
    std::cout << "clappyboi HP: " << clappyboi.getHp() << " (Expected: 15)" << std::endl;
	std::cout << std::endl;
	
    std::cout << "TAKING DAMAGE" << std::endl;
    target.takeDamage(5);
    std::cout << "Target HP: " << target.getHp() << " (Expected: 5)" << std::endl;
	target.beRepaired(15);
	std::cout << "HP:   " << target.getHp() << " (Expected: 10)" << std::endl;
	target.takeDamage(10);
	std::cout << "HP:   " << target.getHp() << " (Expected: 0)" << std::endl;
	target.beRepaired(15);
	std::cout << "HP:   " << target.getHp() << " (Expected: 0)" << std::endl;
	std::cout << std::endl;

    std::cout << "DEPLETING ENERGY" << std::endl;
    for (int i = 0; i < 8; i++) {
        clappyboi.attack("the wall");
    }
    std::cout << "clappyboi EP: " << clappyboi.getEp() << " (Expected: 0)" << std::endl;
    clappyboi.attack("the wall");
    clappyboi.beRepaired(10);
	std::cout << std::endl;

    std::cout << "DEPLETING HEALTH" << std::endl;
    ClapTrap fragile("terminal bot");
    fragile.takeDamage(10);
    std::cout << "terminal bot HP: " << fragile.getHp() << std::endl;
    fragile.attack("anyone");
	std::cout << std::endl;

    std::cout << "COPY AND ASSIGNMENT" << std::endl;
    ClapTrap original("Original");
	std::cout << std::endl;
    
    ClapTrap copy(original);
    std::cout << "Copy Name: " << copy.getName() << " | Dmg: " << copy.getDmg() << std::endl;

    ClapTrap assigned;
    assigned = original;
    std::cout << "Assigned Name: " << assigned.getName() << " | Dmg: " << assigned.getDmg() << std::endl;

    return 0;
}