/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 09:42:03 by ansebast          #+#    #+#             */
/*   Updated: 2025/04/05 13:43:43 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Name Default"), hitPoints(10), energyPoints(10), attackDemage(0)
{
	std::cout << "ClapTrap Default Constructor Called\n";
}

ClapTrap::ClapTrap(const std::string& name) : name(name), hitPoints(10), energyPoints(10), attackDemage(0)
{
	std::cout << "ClapTrap Name Constructor Called\n";
}

ClapTrap::ClapTrap(const ClapTrap &clap)
{
	std::cout << "ClapTrap Copy Constructor Called\n";
	*this = clap;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& clap)
{
	if (this != &clap)
	{
		this->name = clap.name;
		this->hitPoints = clap.hitPoints;
		this->energyPoints = clap.energyPoints;
		this->attackDemage = clap.attackDemage;
	}
	return ( *this );
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->name << " Destrutor Called\n";
}

std::string ClapTrap::getName( void ) const
{
	return ( this->name );
}

void ClapTrap::attack(const std::string& target)
{
	if (!canDoAny())
	{
		std::cout << "ClapTrap " << this->name << " cannot attak because it has not hit points or energy points left\n";
		return ;
	}
	this->energyPoints--;
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDemage << " points of damage!\n";
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->name << " has not hit points left to take any more damage.\n";
		return ;
	}
	this->hitPoints -= amount;
	std::cout << "ClapTrap " << this->name << " takes damage causing a loss of " << amount << " hit points\n";
	std::cout << "Hit Points remaining: " << this->hitPoints << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (!canDoAny())
	{
		std::cout << "ClapTrap " << this->name << " cannot repairs itself because it has no energy points left\n";
		return ;
	}
	this->hitPoints += amount;
	this->energyPoints--;
	std::cout << "ClapTrap " << this->name << " repairs itself, gaining " 
                  << amount << " hit points! Now has " << this->hitPoints 
		  << " hit points." << std::endl;
}

bool ClapTrap::canDoAny( void ) const
{
	bool canDo = this->hitPoints > 0 && this->energyPoints > 0;
	
	return ( canDo );
}