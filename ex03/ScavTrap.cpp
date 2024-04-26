/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 16:27:04 by fvieira           #+#    #+#             */
/*   Updated: 2023/05/28 16:27:05 by fvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Scav name constructor called.\n";
	setEnPoints(50);
	setHitPoints(100);
	setADamage(20);
}

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Scav constructor called.\n";
	setEnPoints(50);
	setHitPoints(100);
	setADamage(20);	
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode.\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "Scav destructor called.\n";
}

ScavTrap& ScavTrap::operator=(ScavTrap const& other)
{
	std::cout << "Scavtrap copy assignment operator called\n";
	if (this == &other)
		return (*this);
	ClapTrap::operator=(other);
	return (*this);
}

void	ScavTrap::attack(const std::string& target)
{
	if (getHitPoints() > 0 && getEnPoints() > 0)
	{
		std::cout << "Scavtrap " << getName() << " attacks " << target;
		std::cout << " causing " << getADamage() << " points of damage!\n";
		setEnPoints(getEnPoints() - 1);
	}
	if (getEnPoints() <= 0 && getHitPoints() > 0)
		std::cout << "Scavtrap " << getName() << " can't attack without energy.\n";
	if (getHitPoints() <= 0)
		std::cout << "Scavtrap " << getName() << " can't attack if they are dead.\n";
}
