/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 16:24:00 by fvieira           #+#    #+#             */
/*   Updated: 2023/05/25 16:24:01 by fvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
protected:
	std::string		name;
	unsigned int	hitPoints;
	unsigned int	enPoints;
	unsigned int	aDamage;

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& to_copy);
	~ClapTrap();

	ClapTrap& operator=(ClapTrap const& other);

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	void	setName(const std::string name);
	void	setHitPoints(const int hitPoints);
	void	setEnPoints(const int enPoints);
	void	setADamage(const int aDamage);

	std::string	getName(void) const;
	int			getHitPoints(void) const;
	int			getEnPoints(void) const;
	int			getADamage(void) const;
	
};

#endif
