/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 16:41:24 by jvalkama          #+#    #+#             */
/*   Updated: 2026/02/18 16:59:38 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

		void	guardGate	();

	public:
		ScavTrap				();
		ScavTrap				( const ClapTrap& );
		ScavTrap				( std::string );
		~ScavTrap				();
		ScavTrap&	operator=	( const ClapTrap& );
};