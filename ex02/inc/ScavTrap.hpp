/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 16:41:24 by jvalkama          #+#    #+#             */
/*   Updated: 2026/03/08 14:04:15 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

	public:
		ScavTrap				();
		ScavTrap				( const ScavTrap& );
		ScavTrap				( std::string );
		~ScavTrap				();
		ScavTrap&	operator=	( const ScavTrap& );

		void	attack		( const std::string & );
		void	guardGate	();
};