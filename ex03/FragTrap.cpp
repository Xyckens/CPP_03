/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 17:32:36 by fvieira           #+#    #+#             */
/*   Updated: 2023/05/28 17:32:37 by fvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Frag name constructor called.\n";
	setEnPoints(100);
	setHitPoints(100);
	setADamage(30);
}

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "Frag constructor called.\n";
	setEnPoints(100);
	setHitPoints(100);
	setADamage(30);
}

void	FragTrap::highFivesGuys(void)
{
	if (getHitPoints() > 0 && getEnPoints() > 0)
		std::cout << "FragTrap " << getName() << " requests a high Five from you 🫵.\n";
	else if (getEnPoints() <= 0 && getHitPoints() > 0)
		std::cout << "Fragtrap " << getName() << " can't vibe with you without energy.\n";
	else if (getHitPoints() <= 0)
		std::cout << "Fragtrap " << getName() << " can't vibe with you if they are dead.\n";
}

FragTrap::~FragTrap()
{
	std::cout << "Frag destructor called.\n";
}

FragTrap& FragTrap::operator=(FragTrap const& other)
{
	std::cout << "Fragtrap copy assignment operator called\n";
	if (this == &other)
		return (*this);
	ClapTrap::operator=(other);
	return (*this);
}

void	FragTrap::attack(const std::string& target)
{
	if (getHitPoints() > 0 && getEnPoints() > 0)
	{
		std::cout << "Fragtrap " << getName() << " attacks " << target;
		std::cout << " causing " << getADamage() << " points of damage!\n";
		setEnPoints(getEnPoints() - 1);
	}
	else if (getEnPoints() <= 0 && getHitPoints() > 0)
		std::cout << "Fragtrap " << getName() << " can't attack without energy.\n";
	else if (getHitPoints() <= 0)
		std::cout << "Fragtrap " << getName() << " can't attack if they are dead.\n";
}
