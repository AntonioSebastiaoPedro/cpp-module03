/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 09:42:03 by ansebast          #+#    #+#             */
/*   Updated: 2025/04/05 19:11:17 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SCAVTRAP
# define SCAVTRAP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap( const std::string& name );
		ScavTrap( const ScavTrap &clap );
		ScavTrap& operator=( const ScavTrap& clap );
		~ScavTrap();

		void attack( const std::string& target );
		void guardGate( void );
};

# endif