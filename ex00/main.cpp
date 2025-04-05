/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 09:42:03 by ansebast          #+#    #+#             */
/*   Updated: 2025/04/05 10:08:13 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int main( void )
{
	ClapTrap clap1;
	ClapTrap clap2("Clark");

	std::cout << std::endl;
	clap1.attack("Clark");
	std::cout << std::endl;
	clap2.takeDamage(8);
	std::cout << std::endl;
	clap2.beRepaired(2);
	std::cout << std::endl;
	
	return (0);
}