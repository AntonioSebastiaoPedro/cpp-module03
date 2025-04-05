/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 08:14:49 by ansebast          #+#    #+#             */
/*   Updated: 2025/04/05 18:11:19 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FRAGTRAP
# define FRAGTRAP

# include "ScavTrap.hpp"

class FragTrap : public ScavTrap
{
	public:
		FragTrap();
		FragTrap( const std::string& name );
		FragTrap( const FragTrap &clap );
		FragTrap& operator=( const FragTrap& clap );
		~FragTrap();

		void highFivesGuys( void );
};

# endif