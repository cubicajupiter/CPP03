/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 11:45:24 by jvalkama          #+#    #+#             */
/*   Updated: 2026/02/19 11:51:35 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

	public:
		FragTrap				();
		FragTrap				( const FragTrap& );;
		FragTrap				( std::string );
		~FragTrap				();
		FragTrap&	operator=	( const FragTrap& );

		void		highFivesGuys ();
};