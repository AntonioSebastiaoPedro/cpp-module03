/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 09:42:03 by ansebast          #+#    #+#             */
/*   Updated: 2025/04/05 13:46:25 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CLAPTRAP
# define CLAPTRAP

# include <iostream>

class ClapTrap
{
	protected:
		std::string name;
		unsigned int hitPoints;
		unsigned int energyPoints;
		unsigned int attackDemage;
	public:
		ClapTrap();
		ClapTrap( const std::string& name );
		ClapTrap( const ClapTrap &clap );
		ClapTrap& operator=( const ClapTrap& clap );
		~ClapTrap();

		std::string getName( void ) const;

		void attack( const std::string& target );
		void takeDamage( unsigned int amount );
		void beRepaired( unsigned int amount );
		bool canDoAny( void ) const;
};

# endif