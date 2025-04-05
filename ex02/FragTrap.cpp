/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 08:14:49 by ansebast          #+#    #+#             */
/*   Updated: 2025/04/05 18:07:01 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ScavTrap()
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDemage = 30;
	
	std::cout << "FragTrap Default Constructor Called\n";
}

FragTrap::FragTrap(const std::string& name) : ScavTrap(name)
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDemage = 30;
	std::cout << "FragTrap Name Constructor Called\n";
}

FragTrap::FragTrap(const FragTrap &clap) : ScavTrap(clap)
{
	std::cout << "FragTrap Copy Constructor Called\n";
}

FragTrap& FragTrap::operator=(const FragTrap& clap)
{
	if (this != &clap)
	{
		ScavTrap::operator=(clap);
	}
	return ( *this );
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->name << " Destructor Called\n";
}

void FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap " << this->name << ": Give me five! 🖐️\n";
}