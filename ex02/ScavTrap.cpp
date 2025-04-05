/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 09:42:03 by ansebast          #+#    #+#             */
/*   Updated: 2025/04/05 15:42:05 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDemage = 20;
	
	std::cout << "ScavTrap Default Constructor Called\n";
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
 	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDemage = 20;
	std::cout << "ScavTrap Name Constructor Called\n";
}

ScavTrap::ScavTrap(const ScavTrap &clap) : ClapTrap(clap)
{
	std::cout << "ScavTrap Copy Constructor Called\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap& clap)
{
	if (this != &clap)
	{
		ClapTrap::operator=(clap);
	}
	return ( *this );
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->name << " Destructor Called\n";
}

void ScavTrap::attack(const std::string& target)
{
	if (!canDoAny())
	{
		std::cout << "ScavTrap " << this->name << " cannot attak because it has not hit points or energy points left\n";
		return ;
	}
	this->energyPoints--;
	std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDemage << " points of damage!\n";
}

void ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode.\n";
}