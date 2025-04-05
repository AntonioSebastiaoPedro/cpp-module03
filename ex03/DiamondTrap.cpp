/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 09:42:03 by ansebast          #+#    #+#             */
/*   Updated: 2025/04/05 19:54:46 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
	this->name = ClapTrap::name + "_clap_name";
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDemage = FragTrap::attackDemage;
	
	std::cout << "DiamondTrap Default Constructor Called\n";
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	this->name = name;
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDemage = FragTrap::attackDemage;
	
	std::cout << "DiamondTrap Name Constructor Called\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &clap) : FragTrap(clap)
{
	std::cout << "DiamondTrap Copy Constructor Called\n";
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& clap)
{
	if (this != &clap)
	{
		FragTrap::operator=(clap);
		this->name = clap.name;
	}
	return ( *this );
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->name << " Destructor Called\n";
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap name: " << this->name
		  << "ClapTrap name: " << ClapTrap::name
		  << std::endl;
}

