/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 09:42:03 by ansebast          #+#    #+#             */
/*   Updated: 2025/04/05 09:07:27 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Name Default"), hitPoints(10), energyPoints(10), attackDemage(0)
{
	std::cout << "Default Constructor Called\n";
}

ClapTrap::ClapTrap(const std::string& name) : name(name), hitPoints(10), energyPoints(10), attackDemage(0)
{
	std::cout << "Name Constructor Called\n";
}

ClapTrap::ClapTrap(const ClapTrap &clap)
{
	std::cout << "Copy Constructor Called\n";
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
	std::cout << this->name << " Destrutor Called\n";
}


void ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDemage << " points of damage!\n";
}
void ClapTrap::takeDamage(unsigned int amount)
{
	this->hitPoints -= amount;
	std::cout << "ClapTrap " << this->name << " takes damage causing a loss of " << amount << " health points\n";
	std::cout << "Points remaining: " << this->hitPoints;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name << " repairs itself, gaining " 
                  << amount << " hit points! Now has " << this->hitPoints 
		  << " hit points." << std::endl;
}