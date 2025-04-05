/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 09:42:03 by ansebast          #+#    #+#             */
/*   Updated: 2025/04/05 15:44:41 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

int main( void )
{
	ScavTrap scav1;
	ScavTrap scav2("Clark");

	std::cout << std::endl;
	scav1.attack("Clark");
	std::cout << std::endl;
	scav2.takeDamage(8);
	std::cout << std::endl;
	scav2.beRepaired(2);
	std::cout << std::endl;
	scav2.guardGate();
	std::cout << std::endl;
	
	return (0);
}