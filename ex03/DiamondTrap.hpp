/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 09:42:03 by ansebast          #+#    #+#             */
/*   Updated: 2025/04/05 19:26:40 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef DIAMONDTRAP
# define DIAMONDTRAP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : virtual public ScavTrap, virtual public FragTrap
{
	private:
		std::string name;
	public:
		DiamondTrap();
		DiamondTrap( const std::string& name );
		DiamondTrap( const DiamondTrap &clap );
		DiamondTrap& operator=( const DiamondTrap& clap );
		~DiamondTrap();

		void attack(const std::string& target);
		void whoAmI(void);
};

# endif