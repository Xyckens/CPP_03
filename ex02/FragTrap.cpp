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
}

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "Frag constructor called.\n";
	
}

void	FragTrap::guardGate(void)
{
	std::cout << "FragTrap " << getName() << " is now in Gate keeper mode.\n";
}

FragTrap::~FragTrap()
{
	std::cout << "Frag destructor called.\n";
}

FragTrap& FragTrap::operator=(FragTrap const& other)
{
	std::cout << "Fragtrap copy assignment operator called\n";
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
	if (getEnPoints() <= 0 && getHitPoints() > 0)
		std::cout << "Fragtrap " << getName() << " can't attack without energy.\n";
	if (getHitPoints() <= 0)
		std::cout << "Fragtrap " << getName() << " can't attack if they are dead.\n";
}
