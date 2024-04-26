/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 14:34:36 by fvieira           #+#    #+#             */
/*   Updated: 2023/05/29 14:34:37 by fvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap()
{
	std::cout << "DiamondTrap default constructor used.\n";
	setHitPoints(100);
	setADamage(100);
	setEnPoints(50);

}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
	std::cout << "DiamondTrap default constructor with name used.\n";
	this->name = name;
	setHitPoints(100);
	setADamage(100);
	setEnPoints(50);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor used.\n";
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "Am I " << this->name << " or am I " << getName() << "?🤔\n";
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const& other)
{
	std::cout << "Diamondtrap copy assignment operator called.\n";
	if (this == &other)
		return (*this);
	setName(other.getName() + "_clap_name");
	ClapTrap::operator=(other);
	return (*this);
}
