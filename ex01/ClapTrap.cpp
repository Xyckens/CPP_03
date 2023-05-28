/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 16:24:07 by fvieira           #+#    #+#             */
/*   Updated: 2023/05/25 16:24:08 by fvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	ClapTrap::setName(const std::string name)
{
	this->name = name;
}

void	ClapTrap::setHitPoints(const int hitPoints)
{
	this->hitPoints = hitPoints;
}

void	ClapTrap::setEnPoints(const int enPoints)
{
	this->enPoints = enPoints;
}

void	ClapTrap::setADamage(const int aDamage)
{
	this->aDamage = aDamage;
}

std::string	ClapTrap::getName(void) const
{
	return (this->name);
}

int	ClapTrap::getHitPoints(void) const
{
	return (this->hitPoints);
}

int	ClapTrap::getEnPoints(void) const
{
	return (this->enPoints);
}

int	ClapTrap::getADamage(void) const
{
	return (this->aDamage);
}

ClapTrap::ClapTrap()
{
	std::cout << "Claptrap default constructor used.\n";
	setADamage(20);
	setEnPoints(50);
	setHitPoints(100);
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Claptrap default constructor with name used.\n";
	setADamage(20);
	setEnPoints(50);
	setHitPoints(100);
	setName(name);
}

ClapTrap::ClapTrap(const ClapTrap& to_copy)
{
	std::cout << "Claptrap copy constructor used.\n";
	setADamage(to_copy.getADamage());
	setEnPoints(to_copy.getEnPoints());
	setHitPoints(to_copy.getHitPoints());
	setName(to_copy.getName());
}

ClapTrap::~ClapTrap()
{
	std::cout << "Claptrap destructor used.\n";
}

ClapTrap& ClapTrap::operator=(ClapTrap const& other)
{
	std::cout << "Claptrap copy assignment operator called\n";
	setADamage(other.getADamage());
	setEnPoints(other.getEnPoints());
	setHitPoints(other.getHitPoints());
	setName(other.getName());
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (getHitPoints() > 0 && getEnPoints() > 0)
	{
		std::cout << "Claptrap " << getName() << " attacks " << target;
		std::cout << " causing " << getADamage() << " points of damage!\n";
		setEnPoints(getEnPoints() - 1);
	}
	if (getEnPoints() <= 0 && getHitPoints() > 0)
		std::cout << "Claptrap " << getName() << " can't attack without energy.\n";
	if (getHitPoints() <= 0)
		std::cout << "Claptrap " << getName() << " can't attack if they are dead.\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (getHitPoints() > 0)
	{
		std::cout << "Claptrap " << getName() << " was damaged for ";
		std::cout << amount << " hitpoints!\n";
		setHitPoints(getHitPoints() - amount);
	}
	else
	{
		std::cout << "Claptrap " << getName() << " is already dead.";
		std::cout << " They can't take anymore damage!\n";
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (getHitPoints() > 0 && getEnPoints() > 0)
	{
		std::cout << "Claptrap " << getName() << " repaired " << amount;
		std::cout << " points of damage!\n";
		setHitPoints(getHitPoints() + amount);
		setEnPoints(getEnPoints() - 1);
	}
	if (getEnPoints() <= 0 && getHitPoints() > 0)
		std::cout << "Claptrap " << getName() << " can't repair without energy.\n";
	if (getHitPoints() <= 0)
		std::cout << "Claptrap " << getName() << " can't repair if they are dead.\n";
}
