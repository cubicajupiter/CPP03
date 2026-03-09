/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 15:29:02 by jvalkama          #+#    #+#             */
/*   Updated: 2026/03/08 13:09:31 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class ClapTrap {

		std::string		_name;
		int				_hp;
		int				_ep;
		int				_dmg;

		bool		_hasHealth	() const ;
		bool		_hasEnergy	() const ;

	public:

		ClapTrap				();
		ClapTrap				( const ClapTrap& );
		ClapTrap				( std::string );
		~ClapTrap				();
		ClapTrap&	operator=	( const ClapTrap& );

		void		attack		( const std::string & );
		void		takeDamage	( unsigned int );
		void		beRepaired	( unsigned int );

		std::string	getName		() const ;
		int			getHp		() const ;
		int			getEp		() const ;
		int			getDmg		() const ;
};