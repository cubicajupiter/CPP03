/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 15:29:06 by jvalkama          #+#    #+#             */
/*   Updated: 2026/02/18 16:40:15 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void) {

	FragTrap fraggy("Hi-five bot");
    std::cout << std::endl;

	FragTrap frigg=fraggy;
	frigg.attack("crap");
    std::cout << "STAT CHECK" << std::endl;
    std::cout << "Name: " << fraggy.getName() << std::endl;
    std::cout << "HP:   " << fraggy.getHp() << " (Expected: 100)" << std::endl;
    std::cout << "EP:   " << fraggy.getEp() << " (Expected: 50)" << std::endl;
    std::cout << "DMG:  " << fraggy.getDmg() << " (Expected: 20)" << std::endl;
    std::cout << std::endl;

    std::cout << "FRAGTRAP CLASS ABILITY" << std::endl;
    fraggy.highFivesGuys();
    std::cout << std::endl;

	std::cout << "INHERITED HEALTH CAP" << std::endl;
	fraggy.takeDamage(10);
	std::cout << "HP:   " << fraggy.getHp() << " (Expected: 90)" << std::endl;
	fraggy.beRepaired(15);
	std::cout << "HP:   " << fraggy.getHp() << " (Expected: 100)" << std::endl;

	return 0;
}